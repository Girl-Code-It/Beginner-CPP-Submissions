#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
int main()
{
    string a,b;
    int i,k,l;
    k=0;
    cout<<"Enter the length of the string : "<<endl;
    cin>>l;
    cout<<"Enter the strings : "<<endl;
    cin>>a>>b;
    while(a!=b&&l>=0)
    {
        a.erase(a.begin());
        b.erase(b.end()-1);
        k++;
        l--;
    }
    if(k==0)
    {
        cout<<"Not possible ";
    }
    else
        cout<<k;
        return 0;
}
