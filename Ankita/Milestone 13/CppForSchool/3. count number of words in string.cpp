//Write a program to count number of words in string.
#include <iostream>
#include <stdio.h>
#include<cstring>
using namespace std;
int main ()
{
    char a[1000];
    gets(a);
    int count = 1;
    for (int i = 1; i < strlen(a)-1; i++)
    {
        if (a[i] == 32 && a[i+1] != 32)
            count++;
    }
    cout << count;
    //ascii value of one space.
}
