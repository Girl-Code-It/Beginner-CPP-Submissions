//Write a program to compare two strings they are exact equal or not.
#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;
int main ()
{
    char a[100], b[100];
    int flag = 1;
    gets(a);
    gets(b);
    if (strlen(a) == strlen(b))
    {
        for (int i = 0; i < strlen(a); i++)
        {
            if (a[i] != b[i])
            {
                cout << "Strings are not equal";
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            cout << "Strings are equal";
    }
    else
        cout << "Strings are not equal";
}
