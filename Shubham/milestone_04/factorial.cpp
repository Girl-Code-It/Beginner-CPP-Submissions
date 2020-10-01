#include<iostream>
#include<cstdio>
#include<math.h>

using namespace std;

int main()
{
    //program to find factorial of a number

    int num, fact=1;

    cout << "Enter a number to find factorial" << endl;
    cin >> num;

    for(int i=1; i<=num; i++)
    {
        fact = fact*i;
    }
    cout << "Factorial of " << num << ":   "<< fact;
}

