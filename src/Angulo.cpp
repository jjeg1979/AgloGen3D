/*! Class definition Angulo for namespace AgloGen3D
*         class Angulo
*    Detailed description goes here.
*
*
*/

// #include section

#include <iostream>
#include <sstream>

#include "../include/Angulo.hpp"

namespace AgloGen3D {

     // Constructors

     Angulo::Angulo( double val, Unidades un )
            : valor{ val },
              unidad{ un }
     {
         if ( !valorValido( val, un ) ) throw InvalidValue{};
     }

     // Default value for angle
     const Angulo& default_angle()
     {
         static Angulo ang{ 0.0, Unidades::radianes };
         return ang;
     }

     Angulo::Angulo()
            : valor{ default_angle().getValor() },
              unidad{ default_angle().getUnidades() }
     {

     }

     // Modifying operations
     void Angulo::setValor( double val, Unidades un )
     {
        if ( valorValido( val, un ) )
        {
            valor = val;
            setUnidad( un );
        }
        else
        {
            throw InvalidValue{};   
        }
     }

     void Angulo::setUnidad( Unidades un )
     {
         unidad = un;
     }

     // Destructor

     Angulo::~Angulo()
     {
         std::cout << "Accediento al destructor de Angulo" << std::endl;
     }

     // Move constructor

     Angulo::Angulo( Angulo& )

     {

     }

     // Move-copy operator

     Angulo& Angulo::operator=( const Angulo& ang )
     {
         Angulo a{ ang.getValor(), ang.getUnidades() };
         return a;

     }

     // Space for auxiliary functions
     bool valorValido( double val, Unidades un )
     {
         double factor = 1;
         if ( un == Unidades::grados )
         {
             factor = default_angle().getConversion();
         }
        if ( val / factor >= minAngulo && val / factor <= maxAngulo ) 
            return true;

        return false;
     }

     // Boolean operators

     bool operator==( const Angulo& a1, const Angulo& a2 )
     {
         return ( ( a1.getValor() == a2.getValor() ) && 
         ( a1.getUnidades() == a2.getUnidades() ) );

     }

     bool operator!=( const Angulo& a1, const Angulo& a2 )
     {
         return !( a1 == a2 );

     }

     // Input/Output operators

     std::istream& operator>>( std::istream& is, Angulo& ang )
     {
         std::string val;
         std::string un;
         // Read angle unit from input skipping blank spaces
         is >> val >> un;

         if ( !is ) return is;

         // Use of stringstream to convert to double
         std::stringstream temp;
         temp << val;
         
         double angulo;
         temp >> angulo;
         
         // Process units
         Unidades tempUnits;
         if ( un == "grados" || un == "º" )
         {
             tempUnits = Unidades::grados;
         }
         else 
         {
             tempUnits = Unidades::radianes;
         }

         if ( valorValido( angulo, tempUnits ) )
         { 
            ang.setValor( angulo, tempUnits );
            return is;
         }
         else 
         {
             is.clear( std::ios_base::failbit );
             return is;
         }         
     }
     
     std::ostream& operator<<( std::ostream& os, const Unidades& un )
     {
         std::string unidad;
         
         switch ( un )
         {
             case Unidades::grados:
                unidad = "grados";
                break;
             case Unidades::radianes:
                unidad = "radianes";
                break;
         }
         
         return os << unidad;
     }
     
     std::ostream& operator<<( std::ostream& os, const Angulo& ang )
     {
         return os << "Valor: " << ang.getValor() << ' ' << ang.getUnidades();

     }

} // end of namespace AgloGen3D
