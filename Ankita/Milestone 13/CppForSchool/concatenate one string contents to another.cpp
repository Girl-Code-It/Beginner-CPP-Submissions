//Write a program to concatenate one string contents to another
#include <iostream>
#include <cstring>
#include <stdio.h>
using namespace std;
int main ()
{
    char source[1000], target[1000];
    gets(source);
    gets(target);
    int m = strlen(target)+ strlen(source), n =strlen(source), i;
    for ( i = n ; i < m; i++)
    {
        source[i] = target[i - n];

    }
    source[i] = '\0';
    puts(source);
    return 0;
}
