/*! Class definition Receptor for namespace AgloGen3D
*         class Receptor : virtual public Cluster
*    Detailed description goes here.
*
*
*/

#ifndef RECEPTOR_H
#define RECEPTOR_H

// #include section

#include <iostream>

namespace AgloGen3D { 

     // Space for enumerations, constants...

     class Receptor : virtual public Cluster { 

          // Public members

          public: 

          // Error classes

          // Constructors

          Receptor();

          // Non-modifying operations

          // Modifying operations

          // Destructor

          virtual ~Receptor();

          // Private members

          private: 

          // Move constructor

          Receptor( Receptor& );

          // Move-copy operator

          Receptor& operator=( const Receptor& );

          // Protected members

          protected: 

     }; // end of class definition Receptor

     // Space for auxiliary functions 

     // Boolean operators 

     bool operator==( const Receptor&, const Receptor& );

     bool operator!=( const Receptor&, const Receptor& );

     // Input/Output operators 

     std::istream& operator>>( std::istream&, Receptor& );

     std::ostream& operator<<( std::ostream&, const Receptor& );

} // end of namespace AgloGen3D

#endif //RECEPTOR_H