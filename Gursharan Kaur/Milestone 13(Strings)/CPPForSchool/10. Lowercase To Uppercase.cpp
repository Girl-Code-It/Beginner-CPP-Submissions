#include<iostream>
using namespace std;

int main( )
{
    char str[80];

    cout<<"Enter string: ";
    cin.getline(str, 80);

    for(int i=0;str[i]!='\0';i++)
    {
        str[i] = (str[i] >= 'a' && str[i] <= 'z') ? (str[i] - 32) : str[i];
    }

    cout<<"Uppercase string: " << str << endl;

    return 0;
}
