/*! Class definition Choque for namespace AgloGen3D
*         class Choque
*    Detailed description goes here.
*
*
*/

#ifndef CHOQUE_H
#define CHOQUE_H

// #include section

#include <iostream>

namespace AgloGen3D { 

          // Space for enumerations, constants...

     class Choque { 

          // Public members

          public: 

          // Error classes

          // Constructors

          Choque();

          // Non-modifying operations

          // Modifying operations

          // Destructor

          virtual ~Choque();

          // Private members

          private: 

          // Move constructor

          Choque( Choque& );

          // Move-copy operator

          Choque& operator=( const Choque& );

          // Protected members

          protected: 

     }; // end of class definition Choque

     // Space for auxiliary functions 

     // Boolean operators 

     bool operator==( const Choque&, const Choque& );

     bool operator!=( const Choque&, const Choque& );

     // Input/Output operators 

     std::istream& operator>>( std::istream&, Choque& );

     std::ostream& operator<<( std::ostream&, const Choque& );

} // end of namespaceAgloGen3D

#endif //CHOQUE_H