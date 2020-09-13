#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    //program to count number of digits in a number

    long int num, temp;
    int digits = 0;
    cout << "Enter a number to count it's digits" << endl;
    cin >> num;
    temp = num;
    while(num > 0)
    {
        num /= 10;
        digits++;
    }

    cout << "Number of digits in " << temp << " = " << digits;
}

