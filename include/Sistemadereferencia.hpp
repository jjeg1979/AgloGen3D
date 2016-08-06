/*! Class definition Sistemadereferencia for namespace AgloGen3D
*         class Sistemadereferencia
*    Detailed description goes here.
*
*
*/

#ifndef SISTEMADEREFERENCIA_H
#define SISTEMADEREFERENCIA_H

// #include section

#include <iostream>

namespace AgloGen3D { 

          // Space for enumerations, constants...

     class Sistemadereferencia { 

          // Public members

          public: 

          // Error classes

          // Constructors

          Sistemadereferencia();

          // Non-modifying operations

          // Modifying operations

          // Destructor

          virtual ~Sistemadereferencia();

          // Private members

          private: 

          // Move constructor

          Sistemadereferencia( Sistemadereferencia& );

          // Move-copy operator

          Sistemadereferencia& operator=( const Sistemadereferencia& );

          // Protected members

          protected: 

     }; // end of class definition Sistemadereferencia

     // Space for auxiliary functions 

     // Boolean operators 

     bool operator==( const Sistemadereferencia&, const Sistemadereferencia& );

     bool operator!=( const Sistemadereferencia&, const Sistemadereferencia& );

     // Input/Output operators 

     std::istream& operator>>( std::istream&, Sistemadereferencia& );

     std::ostream& operator<<( std::ostream&, const Sistemadereferencia& );

} // end of namespaceAgloGen3D

#endif //SISTEMADEREFERENCIA_H