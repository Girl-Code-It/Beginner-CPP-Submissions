#include<iostream>
using namespace std;
int main()
{
    int n,cost;
    cout<<"Enter quantity of item you want to purchased ";
    cin>>n;
    if(n<=100)
    {
        cost=n*100;
    }
    else
    {
       cost=(n*100)-(10*n*100/100);
    }
    cout<<"Cost : "<<cost;

}
