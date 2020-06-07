#include <iostream>
using namespace std;

int main()
{
    char ch;

    cout<<"\n Enter an alphabet: ";
    cin>>ch;

    if (ch >= 'A' && ch <= 'Z')
        cout<<"\n "<< ch <<" is an UpperCase character";

    else if (ch >= 'a' && ch <= 'z')
        cout<<"\n "<< ch<< " is a LowerCase character";

    else
        cout<<"\n "<< ch << " is not an aplhabet ";
}
