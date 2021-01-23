#include<iostream>
#include<cstring>
using namespace std;

int main( )
{
    char str[80];

    cout<<"Enter string: ";
    cin.getline(str, 80);

    for(int i=0;str[i]!='\0';i++)
    {   if(isupper(str[i]))
        str[i]=str[i]+32;
    }

    cout<<"Lowercase string: " << str << endl;

    return 0;
}
