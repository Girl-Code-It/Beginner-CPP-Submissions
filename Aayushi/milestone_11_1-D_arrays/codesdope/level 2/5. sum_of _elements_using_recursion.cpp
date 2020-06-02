//5. Input any number. Find the sum of the digits of the number using a recursive function.
#include<iostream>
using namespace std;

void add(int n, int sum, int newno)
{
    sum = sum + n;
    if (newno == 0)
        cout << "sum = " << sum;
    else
        return add(newno%10, sum, newno/10);
}
int main ()
{
    int num, sum = 0;
    cout << "enter no: ";
    cin >> num;
    add (num%10, sum, num/10);
}
