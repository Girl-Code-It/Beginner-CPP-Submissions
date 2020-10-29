#include<iostream>
#include<cstdio>
#include<math.h>

using namespace std;

int main()
{
    //program to calculate the product of digits of a number

    int prod=1;
    int num, lastDigit;

    cout << "Enter any desired number" << endl;
    cin >> num;

    while(num > 0)
    {
        lastDigit = num % 10;
        prod *= lastDigit;
        num /= 10;
    }

    cout << "Sum of digits is " << prod;

}

