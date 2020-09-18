#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    //program to find first and last digit of a number
    int fdigit, ldigit, num, temp;

    cout << "Enter a number to find first and last digit" << endl;
    cin >> num;

    temp = num;

    while(temp > 10)   //5
    {
        temp /= 10;
    }

    fdigit = temp;
    ldigit = num%10;

    cout << fdigit << " " << ldigit;
}

