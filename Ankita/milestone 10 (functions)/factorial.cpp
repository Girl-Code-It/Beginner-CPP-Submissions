#include <iostream>
using namespace std;
int factorial (int a)
{
    if (a == 1)
        return (1);
    else
    {
        return( a*factorial(a-1));
    }
}
int main ()
{
    int num, fact;
    cout <<"Enter any number: " ;
    cin >> num;
    fact = factorial(num);
    cout << "Factorial of " << num << " is = " << fact;
}
