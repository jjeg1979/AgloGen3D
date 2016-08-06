/*! Class definition Usuario for namespace AgloGen3D
*         class Usuario
*    Detailed description goes here.
*
*
*/

#ifndef USUARIO_H
#define USUARIO_H

// #include section

#include <iostream>

namespace AgloGen3D { 

          // Space for enumerations, constants...

     class Usuario { 

          // Public members

          public: 

          // Error classes

          // Constructors

          Usuario();

          // Non-modifying operations

          // Modifying operations

          // Destructor

          virtual ~Usuario();

          // Private members

          private: 

          // Move constructor

          Usuario( Usuario& );

          // Move-copy operator

          Usuario& operator=( const Usuario& );

          // Protected members

          protected: 

     }; // end of class definition Usuario

     // Space for auxiliary functions 

     // Boolean operators 

     bool operator==( const Usuario&, const Usuario& );

     bool operator!=( const Usuario&, const Usuario& );

     // Input/Output operators 

     std::istream& operator>>( std::istream&, Usuario& );

     std::ostream& operator<<( std::ostream&, const Usuario& );

} // end of namespaceAgloGen3D

#endif //USUARIO_H