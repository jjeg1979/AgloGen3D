/*! Class definition Semipermeable for namespace AgloGen3D
*         class Semipermeable : virtual public Membrana
*    Detailed description goes here.
*
*
*/

#ifndef SEMIPERMEABLE_H
#define SEMIPERMEABLE_H

// #include section

#include <iostream>

namespace AgloGen3D { 

     // Space for enumerations, constants...

     class Semipermeable : virtual public Membrana { 

          // Public members

          public: 

          // Error classes

          // Constructors

          Semipermeable();

          // Non-modifying operations

          // Modifying operations

          // Destructor

          virtual ~Semipermeable();

          // Private members

          private: 

          // Move constructor

          Semipermeable( Semipermeable& );

          // Move-copy operator

          Semipermeable& operator=( const Semipermeable& );

          // Protected members

          protected: 

     }; // end of class definition Semipermeable

     // Space for auxiliary functions 

     // Boolean operators 

     bool operator==( const Semipermeable&, const Semipermeable& );

     bool operator!=( const Semipermeable&, const Semipermeable& );

     // Input/Output operators 

     std::istream& operator>>( std::istream&, Semipermeable& );

     std::ostream& operator<<( std::ostream&, const Semipermeable& );

} // end of namespace AgloGen3D

#endif //SEMIPERMEABLE_H