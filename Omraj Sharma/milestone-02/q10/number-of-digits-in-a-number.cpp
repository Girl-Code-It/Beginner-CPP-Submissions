#include <iostream>

int main()
{
    std::cout << "Enter a number : " ;
    int x ;
    std::cin >> x;

    int i = 1;

    while( x > 9 )
    {
        x /= 10;
        i++;
    }

    std::cout << "Total number of digit in the number is : " << i << "\n";

    return 0;
}
