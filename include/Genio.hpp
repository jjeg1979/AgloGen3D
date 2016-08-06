/*! Class definition Genio for namespace AgloGen3D
*         class Genio
*    Detailed description goes here.
*
*
*/

#ifndef GENIO_H
#define GENIO_H

// #include section

#include <iostream>

namespace AgloGen3D { 

          // Space for enumerations, constants...

     class Genio { 

          // Public members

          public: 

          // Error classes

          // Constructors

          Genio();

          // Non-modifying operations

          // Modifying operations

          // Destructor

          virtual ~Genio();

          // Private members

          private: 

          // Move constructor

          Genio( Genio& );

          // Move-copy operator

          Genio& operator=( const Genio& );

          // Protected members

          protected: 

     }; // end of class definition Genio

     // Space for auxiliary functions 

     // Boolean operators 

     bool operator==( const Genio&, const Genio& );

     bool operator!=( const Genio&, const Genio& );

     // Input/Output operators 

     std::istream& operator>>( std::istream&, Genio& );

     std::ostream& operator<<( std::ostream&, const Genio& );

} // end of namespaceAgloGen3D

#endif //GENIO_H