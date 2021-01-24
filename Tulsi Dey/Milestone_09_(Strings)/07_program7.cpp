/*
Write a program to find a substring within a string. If found display its starting position.

*/
#include <iostream>

using namespace std;

bool check(string str, string substr)
{
    if(substr.length() > str.length()) return false;
    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] == substr[0] && substr == str.substr(i,substr.length()))
        {
            cout<<"Position: "<<(i+1)<<endl;
            return true;
        }
    }
    return false;
}
int main()
{
    string str, substr;
    cout<<"Enter the string: "; cin>>str;
    cout<<"Enter the string to be searched: "; cin>>substr;
    
    if(check(str,substr)) cout<<"Found";
    else cout<<"Not Found";

    return 0;
}