function clases = generarClases( namespace, file, src, include )

if nargin == 2
    if isempty( src )
        src = 'src';
    end
    if isempty( include )
        include = 'include';
    end
end

if nargin == 4
    if isempty( src )
        src = 'src';
    end
    if isempty( include )
        include = 'include';
    end
end

fid = fopen( file );
lineas = 0;

tline = fgetl( fid );

% Contamos las lineas en el archivo de clases
while ( ischar( tline ) )
    lineas = lineas + 1;
    % Eliminamos los espacios en blanco
    tline = strrep( tline, ' ', '' );
    % Vemos si tiene subclases la linea
    corchete = strfind( tline, '[' );
    if corchete
        clases{ lineas, 1 } = tline( 1 : corchete - 1 );  %#ok<*AGROW>
        comas = strfind( tline( corchete + 1 : end ), ',' );
        subclases = cell( 1, numel( comas ) + 1 );
        subclases{ 1, 1 } = tline( corchete + 1 :  corchete + ( comas( 1 ) - 1 ) );
        for s = 2 : numel( comas ) 
            subclases{ 1, s } = tline( corchete + comas( s - 1 ) + 1 : corchete + comas( s ) - 1 );
        end
        subclases{ 1, end } = tline( corchete + comas( end ) + 1 : end - 1 );
        clases{ lineas, 2 } = subclases;
    else
        clases{ lineas, 1 } = tline;        
    end
    tline = fgetl( fid );
end

fclose( fid );
source = [ pwd filesep src ]; 
incl = [ pwd filesep include ];

%% Creamos los archivos de cabecera
for s = 1 : size( clases, 1 )
    file = fullfile( [ incl filesep clases{ s, 1 } '.hpp' ] );
    % Primero los .hpp
    fid = fopen( file, 'w' );
    cabecera = { [ '/*! Class definition ' clases{ s, 1 } ' for namespace ' namespace ]
                         [ '*         class ' clases{ s, 1 }  ]
                          '*    Detailed description goes here.';
                  '*';
                  '*';
                 '*/' };
    fprintf( fid, '%s\n', cabecera{ : } );
    fprintf( fid, '%s\n', '' );
    fprintf( fid, '%s\n', [ '#ifndef ' upper( clases{ s, 1 } ) '_H' ] ); 
    fprintf( fid, '%s\n\n', [ '#define ' upper( clases{ s, 1 } ) '_H' ] );
    fprintf( fid, '%s\n\n', '// #include section' );
    fprintf( fid, '%s\n\n', '#include <iostream>' );
    fprintf( fid, '%s\n\n', [ 'namespace ' namespace ' { ' ] );
    fprintf( fid, '%s\n\n', '     // Space for enumerations, constants...' );    
    fprintf( fid, '%s\n\n', [ '     class ' clases{ s, 1 } ' { ' ] );
    fprintf( fid, '%s\n\n', '          // Public members' );
    fprintf( fid, '%s\n\n', '          public: ' );
    fprintf( fid, '%s\n\n', '          // Error classes' );
    fprintf( fid, '%s\n\n', '          // Constructors' );
    fprintf( fid, '%s\n\n', [ '          ' clases{ s, 1 } '();' ] );
    fprintf( fid, '%s\n\n', '          // Non-modifying operations' );
    fprintf( fid, '%s\n\n', '          // Modifying operations' );
    fprintf( fid, '%s\n\n', '          // Destructor' );
    fprintf( fid, '%s\n\n', [ '          virtual ~' clases{ s, 1 } '();' ] );    
    fprintf( fid, '%s\n\n', '          // Private members' );    
    fprintf( fid, '%s\n\n', '          private: ' );    
    fprintf( fid, '%s\n\n', '          // Move constructor' );
    fprintf( fid, '%s\n\n', [ '          ' clases{ s, 1 } '( ' clases{ s, 1 } '& );' ] );
    fprintf( fid, '%s\n\n', '          // Move-copy operator' );
    fprintf( fid, '%s\n\n', [ '          ' clases{ s, 1 } '& operator=( const ' clases{ s, 1 } '& );' ] );
    fprintf( fid, '%s\n\n', '          // Protected members' );
    fprintf( fid, '%s\n\n', '          protected: ' );    
    fprintf( fid, '%s\n\n', [ '     }; // end of class definition ' clases{ s, 1 } ] );
    fprintf( fid, '%s\n\n', '     // Space for auxiliary functions ' );    
    fprintf( fid, '%s\n\n', '     // Boolean operators ' );   
    fprintf( fid, '%s\n\n', [ '     bool operator==( const ' clases{ s, 1 } '&, const ' clases{ s, 1 } '& );' ] );
    fprintf( fid, '%s\n\n', [ '     bool operator!=( const ' clases{ s, 1 } '&, const ' clases{ s, 1 } '& );' ] );
    fprintf( fid, '%s\n\n', '     // Input/Output operators ' );   
    fprintf( fid, '%s\n\n', [ '     std::istream& operator>>( std::istream&, ' clases{ s, 1 } '& );' ] );
    fprintf( fid, '%s\n\n', [ '     std::ostream& operator<<( std::ostream&, const ' clases{ s, 1 } '& );' ] );
    fprintf( fid, '%s\n', [ '} // end of namespace' namespace ] );
    fprintf( fid, '\n%s', [ '#endif //' upper( clases{ s, 1 } ) '_H' ]  );
    fclose( fid );
    % Vemos si hay subclases
    if ( ~isempty( clases{ s, 2 } ) )
        for r = 1 : size( clases{ s, 2 }, 2 )
            file = fullfile( [ incl filesep clases{ s, 2 }{ r } '.hpp' ] );
            % Las subclases con sus archivos .hpp
            fid = fopen( file, 'w' );
            cabecera = { [ '/*! Class definition ' clases{ s, 2 }{ r } ' for namespace ' namespace ]
                         [ '*         class ' clases{ s, 2 }{ r } ' : virtual public ' clases{ s, 1 } ]
                          '*    Detailed description goes here.';
                          '*';
                          '*';
                         '*/' };
            fprintf( fid, '%s\n', cabecera{ : } );
            fprintf( fid, '%s\n', '' );
            fprintf( fid, '%s\n', [ '#ifndef ' upper( clases{ s, 2 }{ r } ) '_H' ] ); 
            fprintf( fid, '%s\n\n', [ '#define ' upper( clases{ s, 2 }{ r } ) '_H' ] );
            fprintf( fid, '%s\n\n', '// #include section' );
            fprintf( fid, '%s\n\n', '#include <iostream>' );
            fprintf( fid, '%s\n\n', [ 'namespace ' namespace ' { ' ] );
            fprintf( fid, '%s\n\n', '     // Space for enumerations, constants...' );
            fprintf( fid, '%s\n\n', [ '     class ' clases{ s, 2 }{ r } ' : virtual public ' clases{ s, 1 }  ' { ' ] );
            fprintf( fid, '%s\n\n', '          // Public members' );
            fprintf( fid, '%s\n\n', '          public: ' );
            fprintf( fid, '%s\n\n', '          // Error classes' );
            fprintf( fid, '%s\n\n', '          // Constructors' );
            fprintf( fid, '%s\n\n', [ '          ' clases{ s, 2 }{ r } '();' ] );
            fprintf( fid, '%s\n\n', '          // Non-modifying operations' );
            fprintf( fid, '%s\n\n', '          // Modifying operations' );
            fprintf( fid, '%s\n\n', '          // Destructor' );
            fprintf( fid, '%s\n\n', [ '          virtual ~' clases{ s, 2 }{ r } '();' ] );
            fprintf( fid, '%s\n\n', '          // Private members' );
            fprintf( fid, '%s\n\n', '          private: ' );
            fprintf( fid, '%s\n\n', '          // Move constructor' );
            fprintf( fid, '%s\n\n', [ '          ' clases{ s, 2 }{ r } '( ' clases{ s, 2 }{ r } '& );' ] );
            fprintf( fid, '%s\n\n', '          // Move-copy operator' );
            fprintf( fid, '%s\n\n', [ '          ' clases{ s, 2 }{ r } '& operator=( const ' clases{ s, 2 }{ r } '& );' ] );
            fprintf( fid, '%s\n\n', '          // Protected members' );
            fprintf( fid, '%s\n\n', '          protected: ' );    
            fprintf( fid, '%s\n\n', [ '     }; // end of class definition ' clases{ s, 2 }{ r } ] );
            fprintf( fid, '%s\n\n', '     // Space for auxiliary functions ' );    
            fprintf( fid, '%s\n\n', '     // Boolean operators ' );   
            fprintf( fid, '%s\n\n', [ '     bool operator==( const ' clases{ s, 2 }{ r } '&, const ' clases{ s, 2 }{ r } '& );' ] );
            fprintf( fid, '%s\n\n', [ '     bool operator!=( const ' clases{ s, 2 }{ r } '&, const ' clases{ s, 2 }{ r } '& );' ] );
            fprintf( fid, '%s\n\n', '     // Input/Output operators ' );   
            fprintf( fid, '%s\n\n', [ '     std::istream& operator>>( std::istream&, ' clases{ s, 2 }{ r } '& );' ] );
            fprintf( fid, '%s\n\n', [ '     std::ostream& operator<<( std::ostream&, const ' clases{ s, 2 }{ r } '& );' ] );
            fprintf( fid, '%s\n', [ '} // end of namespace ' namespace ] );
            fprintf( fid, '\n%s', [ '#endif //' upper( clases{ s, 2 }{ r } ) '_H' ]  );
            fclose( fid );            
        end
    end
end

%% Creamos los archivos fuente
for s = 1 : size( clases, 1 )
    file = fullfile( [ source filesep clases{ s, 1 } '.cpp' ] );
    % Ahora los .cpp
    fid = fopen( file, 'w' );
    cabecera = { [ '/*! Class definition ' clases{ s, 1 } ' for namespace ' namespace ]
                         [ '*         class ' clases{ s, 1 }  ]
                          '*    Detailed description goes here.';
                  '*';
                  '*';
                 '*/' };
    fprintf( fid, '%s\n', cabecera{ : } );
    fprintf( fid, '%s\n', '' );
    fprintf( fid, '%s\n\n', '// #include section' );
    fprintf( fid, '%s\n\n', '#include <iostream>' );
    fprintf( fid, '%s\n\n', [ '#include "../' include '/' clases{ s, 1 } '.hpp"' ] );
    fprintf( fid, '%s\n\n', [ 'namespace ' namespace ' { ' ] );
    fprintf( fid, '%s\n\n', '     // Constructors' );
    fprintf( fid, '%s\n', [ '     ' clases{ s, 1 } '::' clases{ s, 1 } '()' ] );
    fprintf( fid, '%s\n\n', '     { ' );
    fprintf( fid, '%s\n\n', '     } ' );
    fprintf( fid, '%s\n\n', '     // Modifying operations' );
    fprintf( fid, '%s\n\n', '     // Destructor' );
    fprintf( fid, '%s\n', [ '     ' clases{ s, 1 } '::~' clases{ s, 1 } '()' ] );
    fprintf( fid, '%s\n\n', '     { ' );
    fprintf( fid, '%s\n\n', '     } ' );
    fprintf( fid, '%s\n\n', '     // Move constructor' );
    fprintf( fid, '%s\n\n', [ '     ' clases{ s, 1 } '::' clases{ s, 1 } '( ' clases{ s, 1 } '& )' ] );
    fprintf( fid, '%s\n\n', '     { ' );
    fprintf( fid, '%s\n\n', '     } ' );
    fprintf( fid, '%s\n\n', '     // Move-copy operator' );
    fprintf( fid, '%s\n', [ '     ' clases{ s, 1 } '& ' clases{ s, 1 } '::operator=( const ' clases{ s, 1 } '& )' ] );
    fprintf( fid, '%s\n\n', '     { ' );
    fprintf( fid, '%s\n\n', '     } ' );
    fprintf( fid, '%s\n\n', '     // Space for auxiliary functions ' );    
    fprintf( fid, '%s\n\n', '     // Boolean operators ' );   
    fprintf( fid, '%s\n', [ '     bool operator==( const ' clases{ s, 1 } '&, const ' clases{ s, 1 } '& )' ] );
    fprintf( fid, '%s\n\n', '     { ' );
    fprintf( fid, '%s\n\n', '     } ' );
    fprintf( fid, '%s\n', [ '     bool operator!=( const ' clases{ s, 1 } '&, const ' clases{ s, 1 } '& )' ] );
    fprintf( fid, '%s\n\n', '     { ' );
    fprintf( fid, '%s\n\n', '     } ' );
    fprintf( fid, '%s\n\n', '     // Input/Output operators ' );   
    fprintf( fid, '%s\n', [ '     std::istream& operator>>( std::istream&, ' clases{ s, 1 } '& )' ] );
    fprintf( fid, '%s\n\n', '     { ' );
    fprintf( fid, '%s\n\n', '     } ' );
    fprintf( fid, '%s\n', [ '     std::ostream& operator<<( std::ostream&, const ' clases{ s, 1 } '& )' ] );
    fprintf( fid, '%s\n\n', '     { ' );
    fprintf( fid, '%s\n\n', '     } ' );
    fprintf( fid, '%s\n', [ '} // end of namespace ' namespace ] );
    fclose( fid );
    if ( ~isempty( clases{ s, 2 } ) )
        for r = 1 : size( clases{ s, 2 }, 2 )
            file = fullfile( [ source filesep clases{ s, 2 }{ r } '.cpp' ] );
            fid = fopen( file, 'w' );
            cabecera = { [ '/*! Class definition ' clases{ s, 2 }{ r } ' for namespace ' namespace ]
                         [ '*         class ' clases{ s, 2 }{ r } ' : virtual public ' clases{ s, 1 } ]
                          '*    Detailed description goes here.';
                          '*';
                          '*';
                         '*/' };
            fprintf( fid, '%s\n', cabecera{ : } );
            fprintf( fid, '%s\n', '' );
            fprintf( fid, '%s\n\n', '// #include section' );
            fprintf( fid, '%s\n\n', '#include <iostream>' );
            fprintf( fid, '%s\n\n', [ '#include "../' include '/' clases{ s, 2 }{ r } '.hpp"' ] );
            fprintf( fid, '%s\n\n', [ 'namespace ' namespace ' { ' ] );
            fprintf( fid, '%s\n\n', '     // Constructors' );
            fprintf( fid, '%s\n', [ '     ' clases{ s, 2 }{ r } '::' clases{ s, 1 } '()' ] );
            fprintf( fid, '%s\n\n', '     { ' );
            fprintf( fid, '%s\n\n', '     } ' );
            fprintf( fid, '%s\n\n', '     // Modifying operations' );
            fprintf( fid, '%s\n\n', '     // Destructor' );
            fprintf( fid, '%s\n', [ '     ' clases{ s, 2 }{ r } '::~' clases{ s, 2 }{ r } '()' ] );
            fprintf( fid, '%s\n\n', '     { ' );
            fprintf( fid, '%s\n\n', '     } ' );
            fprintf( fid, '%s\n\n', '     // Move constructor' );
            fprintf( fid, '%s\n\n', [ '     ' clases{ s, 2 }{ r } '::' clases{ s, 2 }{ r } '( ' clases{ s, 2 }{ r } '& )' ] );
            fprintf( fid, '%s\n\n', '     { ' );
            fprintf( fid, '%s\n\n', '     } ' );
            fprintf( fid, '%s\n\n', '     // Move-copy operator' );
            fprintf( fid, '%s\n', [ '     ' clases{ s, 2 }{ r } '& ' clases{ s, 2 }{ r } '::operator=( const ' clases{ s, 2 }{ r } '& )' ] );
            fprintf( fid, '%s\n\n', '     { ' );
            fprintf( fid, '%s\n\n', '     } ' );
            fprintf( fid, '%s\n\n', '     // Space for auxiliary functions ' );    
            fprintf( fid, '%s\n\n', '     // Boolean operators ' );   
            fprintf( fid, '%s\n', [ '     bool operator==( const ' clases{ s, 2 }{ r } '&, const ' clases{ s, 2 }{ r } '& )' ] );
            fprintf( fid, '%s\n\n', '     { ' );
            fprintf( fid, '%s\n\n', '     } ' );
            fprintf( fid, '%s\n', [ '     bool operator!=( const ' clases{ s, 2 }{ r } '&, const ' clases{ s, 2 }{ r } '& )' ] );
            fprintf( fid, '%s\n\n', '     { ' );
            fprintf( fid, '%s\n\n', '     } ' );
            fprintf( fid, '%s\n\n', '     // Input/Output operators ' );   
            fprintf( fid, '%s\n', [ '     std::istream& operator>>( std::istream&, ' clases{ s, 2 }{ r } '& )' ] );
            fprintf( fid, '%s\n\n', '     { ' );
            fprintf( fid, '%s\n\n', '     } ' );
            fprintf( fid, '%s\n', [ '     std::ostream& operator<<( std::ostream&, const ' clases{ s, 2 }{ r } '& )' ] );
            fprintf( fid, '%s\n\n', '     { ' );
            fprintf( fid, '%s\n\n', '     } ' );
            fprintf( fid, '%s\n', [ '} // end of namespace ' namespace ] );
            fclose( fid );
        end        
    end
end

end