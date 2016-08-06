/*! Class definition Proyeccion for namespace AgloGen3D
*         class Proyeccion
*    Detailed description goes here.
*
*
*/

#ifndef PROYECCION_H
#define PROYECCION_H

// #include section

#include <iostream>

namespace AgloGen3D { 

          // Space for enumerations, constants...

     class Proyeccion { 

          // Public members

          public: 

          // Error classes

          // Constructors

          Proyeccion();

          // Non-modifying operations

          // Modifying operations

          // Destructor

          virtual ~Proyeccion();

          // Private members

          private: 

          // Move constructor

          Proyeccion( Proyeccion& );

          // Move-copy operator

          Proyeccion& operator=( const Proyeccion& );

          // Protected members

          protected: 

     }; // end of class definition Proyeccion

     // Space for auxiliary functions 

     // Boolean operators 

     bool operator==( const Proyeccion&, const Proyeccion& );

     bool operator!=( const Proyeccion&, const Proyeccion& );

     // Input/Output operators 

     std::istream& operator>>( std::istream&, Proyeccion& );

     std::ostream& operator<<( std::ostream&, const Proyeccion& );

} // end of namespaceAgloGen3D

#endif //PROYECCION_H