#include <iostream>
using namespace std;
void odd_even (int a)
{
    if (a%2 == 0)
        cout << a << " is an even number.";
    else
        cout << a << " is a odd number.";
}
int main ()
{
    int num;
    cout << "Enter any number: ";
    cin >> num;
    odd_even (num);
}
