/*! Class definition Campo for namespace AgloGen3D
*         class Campo
*    Detailed description goes here.
*
*
*/

#ifndef CAMPO_H
#define CAMPO_H

// #include section

#include <iostream>

namespace AgloGen3D { 

          // Space for enumerations, constants...

     class Campo { 

          // Public members

          public: 

          // Error classes

          // Constructors

          Campo();

          // Non-modifying operations

          // Modifying operations

          // Destructor

          virtual ~Campo();

          // Private members

          private: 

          // Move constructor

          Campo( Campo& );

          // Move-copy operator

          Campo& operator=( const Campo& );

          // Protected members

          protected: 

     }; // end of class definition Campo

     // Space for auxiliary functions 

     // Boolean operators 

     bool operator==( const Campo&, const Campo& );

     bool operator!=( const Campo&, const Campo& );

     // Input/Output operators 

     std::istream& operator>>( std::istream&, Campo& );

     std::ostream& operator<<( std::ostream&, const Campo& );

} // end of namespaceAgloGen3D

#endif //CAMPO_H