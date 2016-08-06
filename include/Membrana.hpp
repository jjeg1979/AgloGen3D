/*! Class definition Membrana for namespace AgloGen3D
*         class Membrana
*    Detailed description goes here.
*
*
*/

#ifndef MEMBRANA_H
#define MEMBRANA_H

// #include section

#include <iostream>

namespace AgloGen3D { 

          // Space for enumerations, constants...

     class Membrana { 

          // Public members

          public: 

          // Error classes

          // Constructors

          Membrana();

          // Non-modifying operations

          // Modifying operations

          // Destructor

          virtual ~Membrana();

          // Private members

          private: 

          // Move constructor

          Membrana( Membrana& );

          // Move-copy operator

          Membrana& operator=( const Membrana& );

          // Protected members

          protected: 

     }; // end of class definition Membrana

     // Space for auxiliary functions 

     // Boolean operators 

     bool operator==( const Membrana&, const Membrana& );

     bool operator!=( const Membrana&, const Membrana& );

     // Input/Output operators 

     std::istream& operator>>( std::istream&, Membrana& );

     std::ostream& operator<<( std::ostream&, const Membrana& );

} // end of namespaceAgloGen3D

#endif //MEMBRANA_H