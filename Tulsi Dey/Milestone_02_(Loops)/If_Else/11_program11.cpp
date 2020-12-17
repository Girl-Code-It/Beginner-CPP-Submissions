/*
Write a program to check whether a entered character
 is lowercase ( a to z ) or uppercase ( A to Z ).

*/
#include <iostream>

using namespace std;
int main()
{
    char ch; cin>>ch;
    
    if(ch >= 'a' && ch <= 'z')
    cout<<"LowerCase"<<endl;
    else if(ch >= 'A' && ch <= 'Z')
    cout<<"UpperCase"<<endl;
    else 
    cout<<"Enter a Alphabet Please!"<<endl;

    return 0;
}