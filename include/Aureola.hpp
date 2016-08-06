/*! Class definition Aureola for namespace AgloGen3D
*         class Aureola
*    Detailed description goes here.
*
*
*/

#ifndef AUREOLA_H
#define AUREOLA_H

// #include section

#include <iostream>

namespace AgloGen3D { 

          // Space for enumerations, constants...

     class Aureola { 

          // Public members

          public: 

          // Error classes

          // Constructors

          Aureola();

          // Non-modifying operations

          // Modifying operations

          // Destructor

          virtual ~Aureola();

          // Private members

          private: 

          // Move constructor

          Aureola( Aureola& );

          // Move-copy operator

          Aureola& operator=( const Aureola& );

          // Protected members

          protected: 

     }; // end of class definition Aureola

     // Space for auxiliary functions 

     // Boolean operators 

     bool operator==( const Aureola&, const Aureola& );

     bool operator!=( const Aureola&, const Aureola& );

     // Input/Output operators 

     std::istream& operator>>( std::istream&, Aureola& );

     std::ostream& operator<<( std::ostream&, const Aureola& );

} // end of namespaceAgloGen3D

#endif //AUREOLA_H