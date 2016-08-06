#include <iostream>
#include "../include/Angulo.hpp"


int main()
{
    AgloGen3D::Angulo a;
    AgloGen3D::Angulo b{ AgloGen3D::pi, AgloGen3D::Unidades::radianes };

    std::cout << "Creado con el objeto Angulo" << std::endl;
    std::cout << "Accediento a la constante de AgloGen3D: " << AgloGen3D::pi << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    // Test operator ==
    switch ( a == b )
    {
        case 0:
            std::cout << "a y b son diferentes" << std::endl;
            break;
         case 1:
            std::cout << "a y b son iguales" << std::endl;
            break;
    }
    // Test setValor function
    a.setValor( 25, AgloGen3D::Unidades::grados );
    std::cout << a << std::endl;
     // Test operator>>
    std::cout << "Introduce ángulo y unidades (grados or radianes): ";
    AgloGen3D::Angulo c;
    try
    {
        std::cin >> c;
        std::cout << c << std::endl;
    }
    catch ( const std::exception& e )
    {
        std::cout << e.what() << std::endl;
    }
    
        
    return 0;
}
