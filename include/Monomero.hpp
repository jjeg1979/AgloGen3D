/*! Class definition Monomero for namespace AgloGen3D
*         class Monomero : virtual public Cluster
*    Detailed description goes here.
*
*
*/

#ifndef MONOMERO_H
#define MONOMERO_H

// #include section

#include <iostream>

namespace AgloGen3D { 

     // Space for enumerations, constants...

     class Monomero : virtual public Cluster { 

          // Public members

          public: 

          // Error classes

          // Constructors

          Monomero();

          // Non-modifying operations

          // Modifying operations

          // Destructor

          virtual ~Monomero();

          // Private members

          private: 

          // Move constructor

          Monomero( Monomero& );

          // Move-copy operator

          Monomero& operator=( const Monomero& );

          // Protected members

          protected: 

     }; // end of class definition Monomero

     // Space for auxiliary functions 

     // Boolean operators 

     bool operator==( const Monomero&, const Monomero& );

     bool operator!=( const Monomero&, const Monomero& );

     // Input/Output operators 

     std::istream& operator>>( std::istream&, Monomero& );

     std::ostream& operator<<( std::ostream&, const Monomero& );

} // end of namespace AgloGen3D

#endif //MONOMERO_H