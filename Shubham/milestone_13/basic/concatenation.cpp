#include<iostream>
#include<cstdlib>
#include<string>
#include<stdlib.h>
#include<stdio.h>

#define MAX 100
using namespace std;

int main()
{
    //program to concatenate two strings
    int i, j;
    char str1[MAX], str2[MAX];

    cout << "Enter string 1\n";
    fgets(str1, MAX, stdin);

    cout << "Enter string 2\n";
    fgets(str2, MAX, stdin);

    for(i=0; str1[i] != NULL; i++)
    {

    }
    i--;
    for(j=0 ;str2[j] != NULL; j++)
    {
        str1[i] = str2[j];
        i++;
    }
    str1[i] = '\0';

    cout << "Final string :  " << str1 << endl;
}   
