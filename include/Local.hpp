/*! Class definition Local for namespace AgloGen3D
*         class Local : virtual public Sistemadereferencia
*    Detailed description goes here.
*
*
*/

#ifndef LOCAL_H
#define LOCAL_H

// #include section

#include <iostream>

namespace AgloGen3D { 

     // Space for enumerations, constants...

     class Local : virtual public Sistemadereferencia { 

          // Public members

          public: 

          // Error classes

          // Constructors

          Local();

          // Non-modifying operations

          // Modifying operations

          // Destructor

          virtual ~Local();

          // Private members

          private: 

          // Move constructor

          Local( Local& );

          // Move-copy operator

          Local& operator=( const Local& );

          // Protected members

          protected: 

     }; // end of class definition Local

     // Space for auxiliary functions 

     // Boolean operators 

     bool operator==( const Local&, const Local& );

     bool operator!=( const Local&, const Local& );

     // Input/Output operators 

     std::istream& operator>>( std::istream&, Local& );

     std::ostream& operator<<( std::ostream&, const Local& );

} // end of namespace AgloGen3D

#endif //LOCAL_H