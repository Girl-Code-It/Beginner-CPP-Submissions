#include <iostream>

int main()
{
    std::cout << "Enter a number : ";
    int x ;
    std::cin >> x;

    for ( int i = x ; i > 0 ; i-- )
        std::cout << i << "\n";

    return 0;
}
