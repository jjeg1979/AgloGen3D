/*! Class definition Aglomerado for namespace AgloGen3D
*         class Aglomerado : virtual public Cluster
*    Detailed description goes here.
*
*
*/

#ifndef AGLOMERADO_H
#define AGLOMERADO_H

// #include section

#include <iostream>

namespace AgloGen3D { 

     // Space for enumerations, constants...

     class Aglomerado : virtual public Cluster { 

          // Public members

          public: 

          // Error classes

          // Constructors

          Aglomerado();

          // Non-modifying operations

          // Modifying operations

          // Destructor

          virtual ~Aglomerado();

          // Private members

          private: 

          // Move constructor

          Aglomerado( Aglomerado& );

          // Move-copy operator

          Aglomerado& operator=( const Aglomerado& );

          // Protected members

          protected: 

     }; // end of class definition Aglomerado

     // Space for auxiliary functions 

     // Boolean operators 

     bool operator==( const Aglomerado&, const Aglomerado& );

     bool operator!=( const Aglomerado&, const Aglomerado& );

     // Input/Output operators 

     std::istream& operator>>( std::istream&, Aglomerado& );

     std::ostream& operator<<( std::ostream&, const Aglomerado& );

} // end of namespace AgloGen3D

#endif //AGLOMERADO_H