/*
Write a program to count number of words in string.

*/
#include <iostream>

using namespace std;

int main()
{
    string str;
    cout<<"Enter the string: "; 
    getline(cin,str);
    
    int count = 0;
    str = " " + str;
    cout<<"number of words: ";
    
    for(int i = 0; i < str.length(); i++)
    if(str[i] == ' ') count++;

    cout<<count;

    return 0;
}