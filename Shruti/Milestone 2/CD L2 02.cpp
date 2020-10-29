#include <iostream>
using namespace std;

int main()
{
    int age;
    char s,m;

    cout<<"\n Enter your age: ";
    cin>>age;
    cout<<"\n Enter your sex (M/F) : ";
    cin>>s;
    cout<<"\n Enter your marital status (Y/N): ";
    cin>>m;

    if((s=='f')||(s=='F'))
        cout<<"\n You'll work in urban areas only.";
    if((s=='m')||(s=='M'))
    {
        if((age>=20)&&(age<=40))
            cout<<"\n You can work anywhere.";
        else if((age>40)&&(age<=60))
            cout<<"\n You'll work in urban areas only.";
        else
            cout<<"\n ERROR";
    }
}
