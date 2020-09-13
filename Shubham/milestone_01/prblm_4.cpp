#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int num;

    cout << "Enter a number to check -ve, +ve or zero\n";
    cin >> num;

    if(num > 0)
        cout << "It's a positive Number";
    else if(num < 0)
        cout << "It's a negative Number";
    else
        cout << "It's Zero :|";
}

