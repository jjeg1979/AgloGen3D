/*! Class definition Punto for namespace AgloGen3D
*         class Punto
*    Detailed description goes here.
*
*
*/

#ifndef PUNTO_H
#define PUNTO_H

// #include section

#include <iostream>

namespace AgloGen3D { 

          // Space for enumerations, constants...

     class Punto { 

          // Public members

          public: 

          // Error classes

          // Constructors

          Punto();

          // Non-modifying operations

          // Modifying operations

          // Destructor

          virtual ~Punto();

          // Private members

          private: 

          // Move constructor

          Punto( Punto& );

          // Move-copy operator

          Punto& operator=( const Punto& );

          // Protected members

          protected: 

     }; // end of class definition Punto

     // Space for auxiliary functions 

     // Boolean operators 

     bool operator==( const Punto&, const Punto& );

     bool operator!=( const Punto&, const Punto& );

     // Input/Output operators 

     std::istream& operator>>( std::istream&, Punto& );

     std::ostream& operator<<( std::ostream&, const Punto& );

} // end of namespaceAgloGen3D

#endif //PUNTO_H