#include <iostream>

int main()
{
    std::cout << "Enter a number : ";
    int x ;
    std::cin >> x;

    int sum = 0;
    for( int i = 1 ; i <= x ; i++ )
        if( i%2 != 0)
            sum +=i;

    std::cout << "Sum of all the even values between 1 and " << x << " : " << sum << "\n";

    return 0;
}

