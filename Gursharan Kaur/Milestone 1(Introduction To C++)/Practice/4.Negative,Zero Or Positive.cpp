#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter a number:";
    cin>>a;
    if(a>0)
        cout<<"No. is Positive";
    else if(a<0)
        cout<<"No. is negative";
    else
        cout<<"No. is Zero";
}
