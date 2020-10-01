#include<iostream>
#include<cstdio>
#include<math.h>

using namespace std;

int main()
{
    //program to calculate the sum of digits of a number

    int sum=0;
    int num, lastDigit;

    cout << "Enter any desired number" << endl;
    cin >> num;

    while(num > 0)
    {
        lastDigit = num % 10;
        sum += lastDigit;
        num /= 10;
    }

    cout << "Sum of digits is " << sum;

}

