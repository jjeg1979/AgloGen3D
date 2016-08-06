/*! Class definition Vecindad for namespace AgloGen3D
*         class Vecindad
*    Detailed description goes here.
*
*
*/

#ifndef VECINDAD_H
#define VECINDAD_H

// #include section

#include <iostream>

namespace AgloGen3D { 

          // Space for enumerations, constants...

     class Vecindad { 

          // Public members

          public: 

          // Error classes

          // Constructors

          Vecindad();

          // Non-modifying operations

          // Modifying operations

          // Destructor

          virtual ~Vecindad();

          // Private members

          private: 

          // Move constructor

          Vecindad( Vecindad& );

          // Move-copy operator

          Vecindad& operator=( const Vecindad& );

          // Protected members

          protected: 

     }; // end of class definition Vecindad

     // Space for auxiliary functions 

     // Boolean operators 

     bool operator==( const Vecindad&, const Vecindad& );

     bool operator!=( const Vecindad&, const Vecindad& );

     // Input/Output operators 

     std::istream& operator>>( std::istream&, Vecindad& );

     std::ostream& operator<<( std::ostream&, const Vecindad& );

} // end of namespaceAgloGen3D

#endif //VECINDAD_H