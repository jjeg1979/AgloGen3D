/*! Class definition Dilatacion for namespace AgloGen3D
*         class Dilatacion
*    Detailed description goes here.
*
*
*/

#ifndef DILATACION_H
#define DILATACION_H

// #include section

#include <iostream>

namespace AgloGen3D { 

          // Space for enumerations, constants...

     class Dilatacion { 

          // Public members

          public: 

          // Error classes

          // Constructors

          Dilatacion();

          // Non-modifying operations

          // Modifying operations

          // Destructor

          virtual ~Dilatacion();

          // Private members

          private: 

          // Move constructor

          Dilatacion( Dilatacion& );

          // Move-copy operator

          Dilatacion& operator=( const Dilatacion& );

          // Protected members

          protected: 

     }; // end of class definition Dilatacion

     // Space for auxiliary functions 

     // Boolean operators 

     bool operator==( const Dilatacion&, const Dilatacion& );

     bool operator!=( const Dilatacion&, const Dilatacion& );

     // Input/Output operators 

     std::istream& operator>>( std::istream&, Dilatacion& );

     std::ostream& operator<<( std::ostream&, const Dilatacion& );

} // end of namespaceAgloGen3D

#endif //DILATACION_H