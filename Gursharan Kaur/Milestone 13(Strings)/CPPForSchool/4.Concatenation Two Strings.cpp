#include<iostream>
using namespace std;

int main( )
{
    char str1[80], str2[80];
    cout<<"Enter first string: ";
    cin.getline(str1, 80);
    cout<<"Enter second string: ";
    cin.getline(str2, 80);
    int l = 0;
    for(l = 0; str1[l] != '\0'; l++);
    for(int i = 0; str2[i] != '\0'; i++)
    {
        str1[l++] = str2[i];
    }
    str1[l] = '\0';
    cout << "\nThe first string after adding second string content:\n\n" << str1;
    return 0;
}
