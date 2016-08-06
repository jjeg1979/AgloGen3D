/*! Class definition Interseccion for namespace AgloGen3D
*         class Interseccion
*    Detailed description goes here.
*
*
*/

#ifndef INTERSECCION_H
#define INTERSECCION_H

// #include section

#include <iostream>

namespace AgloGen3D { 

          // Space for enumerations, constants...

     class Interseccion { 

          // Public members

          public: 

          // Error classes

          // Constructors

          Interseccion();

          // Non-modifying operations

          // Modifying operations

          // Destructor

          virtual ~Interseccion();

          // Private members

          private: 

          // Move constructor

          Interseccion( Interseccion& );

          // Move-copy operator

          Interseccion& operator=( const Interseccion& );

          // Protected members

          protected: 

     }; // end of class definition Interseccion

     // Space for auxiliary functions 

     // Boolean operators 

     bool operator==( const Interseccion&, const Interseccion& );

     bool operator!=( const Interseccion&, const Interseccion& );

     // Input/Output operators 

     std::istream& operator>>( std::istream&, Interseccion& );

     std::ostream& operator<<( std::ostream&, const Interseccion& );

} // end of namespaceAgloGen3D

#endif //INTERSECCION_H