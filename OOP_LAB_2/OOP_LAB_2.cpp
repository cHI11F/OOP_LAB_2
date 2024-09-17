#include <iostream>
#include "Vector.h"

int main() {
    
    Vector v1(1.0, 2.0, 3.0);
    Vector v2;
    v2.Init(4.0, 5.0, 6.0);

    
    v1.Display();
    v2.Display();

    
    std::cout << "Довжина v1: " << v1.length() << std::endl;
    std::cout << "Довжина v2: " << v2.length() << std::endl;

    
    Vector v3 = v1.add(v2);
    v3.Display();

    
    std::cout << "Скалярний добуток v1 і v2: " << v1.dotProduct(v2) << std::endl;

    
    Vector v4;
    v4.Read();
    v4.Display();

    
    std::cout << "Вектор v4: " << v4.toString() << std::endl;

    return 0;
}
