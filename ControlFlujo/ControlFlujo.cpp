#include <iostream>

int main()
{
    std::cout << "Escribe un entero: ";

    int x{};
    std::cin >> x;

    std::cout << "Has escrito " << x;

    return 0;
}