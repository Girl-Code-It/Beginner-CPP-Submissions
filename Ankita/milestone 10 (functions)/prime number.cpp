#include <iostream>
using namespace std;
void prime (int a, int n)
{
    if (a%n != 0)
    {
        if (n > 2)
            prime(a,n-1);
        else
            cout << a << " is  prime number.";
    }
    else
        cout << a << " is not a prime number.";
}
int main ()
{
    int num, n;
    cout << "Enter any number: ";
    cin >> num;
    n = num - 1;
    prime (num, n);
}
