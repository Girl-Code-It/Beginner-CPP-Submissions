#include <iostream>
using namespace std;
void sumofdigits (int digit, int sum, int newno)
{
    if (newno > 0)
    {
        sum = sum + digit;
        sumofdigits (newno%10, sum, newno/10);
    }
    else
        cout << "Sum of digits: " << sum + digit;
}
int main ()
{
    int a, sum = 0;
    cout << "Enter a number: ";
    cin >> a;
    sumofdigits (a%10, sum, a/10);
}
