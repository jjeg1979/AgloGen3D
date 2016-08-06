/*! Class definition Vector for namespace AgloGen3D
*         class Vector
*    Detailed description goes here.
*
*
*/

#ifndef VECTOR_H
#define VECTOR_H

// #include section

#include <iostream>

namespace AgloGen3D { 

          // Space for enumerations, constants...

     class Vector { 

          // Public members

          public: 

          // Error classes

          // Constructors

          Vector();

          // Non-modifying operations

          // Modifying operations

          // Destructor

          virtual ~Vector();

          // Private members

          private: 

          // Move constructor

          Vector( Vector& );

          // Move-copy operator

          Vector& operator=( const Vector& );

          // Protected members

          protected: 

     }; // end of class definition Vector

     // Space for auxiliary functions 

     // Boolean operators 

     bool operator==( const Vector&, const Vector& );

     bool operator!=( const Vector&, const Vector& );

     // Input/Output operators 

     std::istream& operator>>( std::istream&, Vector& );

     std::ostream& operator<<( std::ostream&, const Vector& );

} // end of namespaceAgloGen3D

#endif //VECTOR_H