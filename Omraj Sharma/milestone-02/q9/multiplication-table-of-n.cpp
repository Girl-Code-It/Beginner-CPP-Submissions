#include <iostream>

int main()
{
    std::cout << "Enter any number : ";
    int n;
    std::cin >> n;

    for( int i = 1 ; i <= 10 ; i++ )
        std::cout << n << " X " << i << " = " << n*i << "\n";

    return 0 ;
}
