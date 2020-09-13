#include<iostream>
#include<cstdio>
#include<math.h>

using namespace std;

int main()
{
    //program to find all factors of a number

    int num;

    cout << "Enter a number to find factors  " << endl;
    cin >> num;

    cout << "Factors of " << num << ":  ";

    for(int i=1; i<=num; i++)
    {
        if(num%i == 0)
            cout << i << "  ";
    }
}

