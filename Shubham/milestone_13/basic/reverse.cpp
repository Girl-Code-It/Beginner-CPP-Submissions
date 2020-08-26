#include<iostream>
#include<string>

#define MAX 100
using namespace std;

int main()
{
    //program to reverse a string

    char str[MAX];
    char str1[MAX];
    cout << "Enter a string \n";
    cin >> str;

    int i, j;

    for(i=0; str[i] != '\0'; i++);

    i--; 

    for(j=0; i>=0; j++)
    {
        str1[j] = str[i];
        i--;
    }
    str1[j] = '\0';

    cout << "Reversed String is " << str1 << endl;

    
    
}   
