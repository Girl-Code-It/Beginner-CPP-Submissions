/*
Write a program to convert a string in uppercase. 

*/
#include <iostream>

using namespace std;

int main()
{
    string str, result = "";
    cout<<"Enter the string: "; getline(cin,str);

    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        result += (char)(str[i] + 'A' - 'a');
        else result += str[i];
    }
    
    cout<<"Resultant string: "<<result;
    return 0;
}