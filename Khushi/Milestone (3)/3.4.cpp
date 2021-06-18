#include<iostream>
using namespace std;
 
int main()
{
    int  num, val, sum = 0;
 
    cout << "Enter the number : ";
    cin >> num;
    val=num;
    while (num != 0)
    {
        sum = sum + num % 10;
        num = num / 10;
    }
    cout << "The sum of the digits of "
         << val << " is " << sum;
}

