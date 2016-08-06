/*! Class definition Angulo for namespace AgloGen3D
*         class Angulo
*    Detailed description goes here.
*
*
*/

#ifndef ANGULO_H
#define ANGULO_H

// #include section

#include <iostream>
#include <stdexcept>

namespace AgloGen3D {

     // Space for enumerations, constants...
     constexpr static double pi = 3.141592653508979323846;
     constexpr static double maxAngulo{ 2 * pi };
     constexpr static double minAngulo{ 0.0 };
     enum class Unidades { grados, radianes };

     // Error classes
     class InvalidValue : public virtual std::runtime_error{
        public:
            InvalidValue( )
            : std::runtime_error( "Error al construir Angulo" )
            {

            }
     };

     class Angulo {

          // Public members

          public:             

              // Constructors
              Angulo( double, Unidades );
              Angulo();

              // Non-modifying operations
              double getValor() const { return valor; }
              Unidades getUnidades() const { return unidad; }
              double getConversion() const { return conversion; }


              // Modifying operations
              void setValor( double, Unidades un );              

              // Destructor

              virtual ~Angulo();

          // Private members

          private:

              double valor;
              Unidades unidad;
              constexpr static double conversion = 180 / pi;

             // Move constructor

             Angulo( Angulo& );

             // Move-copy operator

             Angulo& operator=( const Angulo& );

             // Modifying private operations
             void setUnidad( Unidades );

          // Protected members

          protected:

     }; // end of class definition Angulo

     // Space for auxiliary functions
     bool valorValido( double, Unidades );

     // Boolean operators

     bool operator==( const Angulo&, const Angulo& );

     bool operator!=( const Angulo&, const Angulo& );

     // Input/Output operators

     std::istream& operator>>( std::istream&, Angulo& );
     std::ostream& operator<<( std::ostream&, const Unidades& );
     std::ostream& operator<<( std::ostream&, const Angulo& );

} // end of namespaceAgloGen3D

#endif //ANGULO_H
