#include<iostream>
#include<cstdlib>
#include<string>
#include<stdlib.h>
#include<stdio.h>

#define MAX 100
using namespace std;

int main()
{
    //program to count number of words in the string
    int count =1;
    char str[MAX];
    cout << "Enter the string\n";
    fgets(str, 100, stdin);

    for(int i=0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
        {
            count++;
        }
    }
    cout << "There are total " << count << " words in the string.\n";
}   
