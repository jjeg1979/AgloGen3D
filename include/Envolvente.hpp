/*! Class definition Envolvente for namespace AgloGen3D
*         class Envolvente
*    Detailed description goes here.
*
*
*/

#ifndef ENVOLVENTE_H
#define ENVOLVENTE_H

// #include section

#include <iostream>

namespace AgloGen3D { 

          // Space for enumerations, constants...

     class Envolvente { 

          // Public members

          public: 

          // Error classes

          // Constructors

          Envolvente();

          // Non-modifying operations

          // Modifying operations

          // Destructor

          virtual ~Envolvente();

          // Private members

          private: 

          // Move constructor

          Envolvente( Envolvente& );

          // Move-copy operator

          Envolvente& operator=( const Envolvente& );

          // Protected members

          protected: 

     }; // end of class definition Envolvente

     // Space for auxiliary functions 

     // Boolean operators 

     bool operator==( const Envolvente&, const Envolvente& );

     bool operator!=( const Envolvente&, const Envolvente& );

     // Input/Output operators 

     std::istream& operator>>( std::istream&, Envolvente& );

     std::ostream& operator<<( std::ostream&, const Envolvente& );

} // end of namespaceAgloGen3D

#endif //ENVOLVENTE_H