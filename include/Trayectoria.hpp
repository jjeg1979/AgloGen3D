/*! Class definition Trayectoria for namespace AgloGen3D
*         class Trayectoria
*    Detailed description goes here.
*
*
*/

#ifndef TRAYECTORIA_H
#define TRAYECTORIA_H

// #include section

#include <iostream>

namespace AgloGen3D { 

          // Space for enumerations, constants...

     class Trayectoria { 

          // Public members

          public: 

          // Error classes

          // Constructors

          Trayectoria();

          // Non-modifying operations

          // Modifying operations

          // Destructor

          virtual ~Trayectoria();

          // Private members

          private: 

          // Move constructor

          Trayectoria( Trayectoria& );

          // Move-copy operator

          Trayectoria& operator=( const Trayectoria& );

          // Protected members

          protected: 

     }; // end of class definition Trayectoria

     // Space for auxiliary functions 

     // Boolean operators 

     bool operator==( const Trayectoria&, const Trayectoria& );

     bool operator!=( const Trayectoria&, const Trayectoria& );

     // Input/Output operators 

     std::istream& operator>>( std::istream&, Trayectoria& );

     std::ostream& operator<<( std::ostream&, const Trayectoria& );

} // end of namespaceAgloGen3D

#endif //TRAYECTORIA_H