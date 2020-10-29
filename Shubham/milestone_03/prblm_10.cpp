#include<iostream>
#include<cstdio>
#include<math.h>

using namespace std;

int main()
{
    //program to print all ascii character with their values;

    int i;

    for(i=0; i<=255; i++)
    {
        cout << "ASCII Value of " << (char)i << " is --> " << (int)i <<endl;
    }
}

