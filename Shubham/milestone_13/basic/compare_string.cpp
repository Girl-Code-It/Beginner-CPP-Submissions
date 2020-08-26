#include<iostream>
#include<cstdlib>
#include<string>
#include<stdlib.h>
#include<stdio.h>

#define MAX 100
using namespace std;

int main()
{
    //program to compare two strings
    int i, j;
    char str1[MAX], str2[MAX];

    cout << "Enter string 1\n";
    fgets(str1, MAX, stdin);

    cout << "Enter string 2\n";
    fgets(str2, MAX, stdin);

    int flag = 0;

    for(i=0; str1[i] != '\0' || str2[i] != '\0'; i++)
    {
        if(str1[i] != str2[i])
        {
            flag =1;
            break;
        }
    }
    if(flag == 1)
        cout << "Strings are not equal\n";
    else
        cout << "String are equal\n";
}   
