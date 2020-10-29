#include <iostream>

int main()
{
    std::cout << "Enter a number : ";
    int x ;
    std::cin >> x;

    for( int i = 1 ; i <= x ; i++ )
        std::cout << i << "\n";

    return 0;
}
