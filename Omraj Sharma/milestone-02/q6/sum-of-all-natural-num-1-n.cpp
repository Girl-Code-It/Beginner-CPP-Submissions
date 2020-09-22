#include <iostream>

int main()
{
    std::cout << "Enter a number : ";
    int x ;
    std::cin >> x;

    int sum = 0;
    for( int i = 1 ; i <= x ; i++ )
        sum +=i;

    std::cout << "Sum all the natural number between 1 and " << x << " : " << sum << "\n";

    return 0;
}
