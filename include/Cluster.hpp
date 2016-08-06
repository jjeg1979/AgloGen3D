/*! Class definition Cluster for namespace AgloGen3D
*         class Cluster
*    Detailed description goes here.
*
*
*/

#ifndef CLUSTER_H
#define CLUSTER_H

// #include section

#include <iostream>

namespace AgloGen3D { 

          // Space for enumerations, constants...

     class Cluster { 

          // Public members

          public: 

          // Error classes

          // Constructors

          Cluster();

          // Non-modifying operations

          // Modifying operations

          // Destructor

          virtual ~Cluster();

          // Private members

          private: 

          // Move constructor

          Cluster( Cluster& );

          // Move-copy operator

          Cluster& operator=( const Cluster& );

          // Protected members

          protected: 

     }; // end of class definition Cluster

     // Space for auxiliary functions 

     // Boolean operators 

     bool operator==( const Cluster&, const Cluster& );

     bool operator!=( const Cluster&, const Cluster& );

     // Input/Output operators 

     std::istream& operator>>( std::istream&, Cluster& );

     std::ostream& operator<<( std::ostream&, const Cluster& );

} // end of namespaceAgloGen3D

#endif //CLUSTER_H