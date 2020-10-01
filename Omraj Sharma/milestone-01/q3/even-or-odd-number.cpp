#include <iostream>

int main()
{
    int x;

    std::cout << "Enter a number : ";
    std::cin >> x;

    if( x % 2 ==0 )
        std::cout << "\nNumber is EVEN !!" << "\n";
    else
        std::cout << "\nNumber is ODD !!" << "\n";

    return 0;
}
