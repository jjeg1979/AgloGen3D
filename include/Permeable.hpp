/*! Class definition Permeable for namespace AgloGen3D
*         class Permeable : virtual public Membrana
*    Detailed description goes here.
*
*
*/

#ifndef PERMEABLE_H
#define PERMEABLE_H

// #include section

#include <iostream>

namespace AgloGen3D { 

     // Space for enumerations, constants...

     class Permeable : virtual public Membrana { 

          // Public members

          public: 

          // Error classes

          // Constructors

          Permeable();

          // Non-modifying operations

          // Modifying operations

          // Destructor

          virtual ~Permeable();

          // Private members

          private: 

          // Move constructor

          Permeable( Permeable& );

          // Move-copy operator

          Permeable& operator=( const Permeable& );

          // Protected members

          protected: 

     }; // end of class definition Permeable

     // Space for auxiliary functions 

     // Boolean operators 

     bool operator==( const Permeable&, const Permeable& );

     bool operator!=( const Permeable&, const Permeable& );

     // Input/Output operators 

     std::istream& operator>>( std::istream&, Permeable& );

     std::ostream& operator<<( std::ostream&, const Permeable& );

} // end of namespace AgloGen3D

#endif //PERMEABLE_H