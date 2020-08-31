//Write a program to convert a string in lowercase
#include <iostream>
#include <cstring>
#include <stdio.h>
using namespace std;
int main ()
{
    char a[100] ;
    cin.getline(a, 100);
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] <= 90 && a[i]!= 32)
            a[i] = a[i] + 32;
    }
    puts(a);
}
