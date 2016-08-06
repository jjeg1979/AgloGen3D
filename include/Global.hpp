/*! Class definition Global for namespace AgloGen3D
*         class Global : virtual public Sistemadereferencia
*    Detailed description goes here.
*
*
*/

#ifndef GLOBAL_H
#define GLOBAL_H

// #include section

#include <iostream>

namespace AgloGen3D { 

     // Space for enumerations, constants...

     class Global : virtual public Sistemadereferencia { 

          // Public members

          public: 

          // Error classes

          // Constructors

          Global();

          // Non-modifying operations

          // Modifying operations

          // Destructor

          virtual ~Global();

          // Private members

          private: 

          // Move constructor

          Global( Global& );

          // Move-copy operator

          Global& operator=( const Global& );

          // Protected members

          protected: 

     }; // end of class definition Global

     // Space for auxiliary functions 

     // Boolean operators 

     bool operator==( const Global&, const Global& );

     bool operator!=( const Global&, const Global& );

     // Input/Output operators 

     std::istream& operator>>( std::istream&, Global& );

     std::ostream& operator<<( std::ostream&, const Global& );

} // end of namespace AgloGen3D

#endif //GLOBAL_H