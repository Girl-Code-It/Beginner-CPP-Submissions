#include <iostream>

int main()
{
    int x,y;\

    std::cout << "Enter first number : ";
    std::cin >> x;

    std::cout << "Enter second number : ";
    std::cin >> y;

    if( x > y )
        std::cout << "First Number > Second Number" << "\n";
    else
        std::cout << "First Number < Second Number" << "\n";

    return 0;
}
