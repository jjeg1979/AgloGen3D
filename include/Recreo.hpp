/*! Class definition Recreo for namespace AgloGen3D
*         class Recreo
*    Detailed description goes here.
*
*
*/

#ifndef RECREO_H
#define RECREO_H

// #include section

#include <iostream>

namespace AgloGen3D { 

          // Space for enumerations, constants...

     class Recreo { 

          // Public members

          public: 

          // Error classes

          // Constructors

          Recreo();

          // Non-modifying operations

          // Modifying operations

          // Destructor

          virtual ~Recreo();

          // Private members

          private: 

          // Move constructor

          Recreo( Recreo& );

          // Move-copy operator

          Recreo& operator=( const Recreo& );

          // Protected members

          protected: 

     }; // end of class definition Recreo

     // Space for auxiliary functions 

     // Boolean operators 

     bool operator==( const Recreo&, const Recreo& );

     bool operator!=( const Recreo&, const Recreo& );

     // Input/Output operators 

     std::istream& operator>>( std::istream&, Recreo& );

     std::ostream& operator<<( std::ostream&, const Recreo& );

} // end of namespaceAgloGen3D

#endif //RECREO_H