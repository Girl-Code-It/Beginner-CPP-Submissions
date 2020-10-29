#include <iostream>

int main()
{
    int x;

    std::cout << "Enter a number : ";
    std::cin >> x;

    if( x < 0 )
        std::cout << "\nNumber is -VE !!" << "\n";
    else if ( x > 0 )
        std::cout << "\nNumber is +VE !!" << "\n";
    else
        std::cout << "\nNumber is zero !!!" << "\n";

    return 0;
}
