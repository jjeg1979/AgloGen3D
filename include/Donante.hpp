/*! Class definition Donante for namespace AgloGen3D
*         class Donante : virtual public Cluster
*    Detailed description goes here.
*
*
*/

#ifndef DONANTE_H
#define DONANTE_H

// #include section

#include <iostream>

namespace AgloGen3D { 

     // Space for enumerations, constants...

     class Donante : virtual public Cluster { 

          // Public members

          public: 

          // Error classes

          // Constructors

          Donante();

          // Non-modifying operations

          // Modifying operations

          // Destructor

          virtual ~Donante();

          // Private members

          private: 

          // Move constructor

          Donante( Donante& );

          // Move-copy operator

          Donante& operator=( const Donante& );

          // Protected members

          protected: 

     }; // end of class definition Donante

     // Space for auxiliary functions 

     // Boolean operators 

     bool operator==( const Donante&, const Donante& );

     bool operator!=( const Donante&, const Donante& );

     // Input/Output operators 

     std::istream& operator>>( std::istream&, Donante& );

     std::ostream& operator<<( std::ostream&, const Donante& );

} // end of namespace AgloGen3D

#endif //DONANTE_H