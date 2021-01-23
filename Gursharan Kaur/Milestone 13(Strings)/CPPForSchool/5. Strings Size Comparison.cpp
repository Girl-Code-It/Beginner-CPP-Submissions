#include<iostream>
using namespace std;

int main( )
{
    char str1[80], str2[80];

    cout<<"Enter first string: ";
    gets(str1);

    cout<<"Enter second string: ";
    gets(str2);

    int i;
    for (i = 0; str1[i] == str2[i] && str1[i]!= '\0' && str2[i] != '\0'; i++);

    if(str1[i] - str2[i] == 0)
        cout << "Strings are equal";
    else
        cout << "Strings are not equal";

    return 0;
}
