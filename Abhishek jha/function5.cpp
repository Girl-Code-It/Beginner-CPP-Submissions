#include<iostream>
using namespace std;
int power(int a,int b)
{
    
    if (b==1)
    {
        return a;
    }
    else
    {
        return(a*power(a,b-1));
    }
    
};
int main()
{
    int t,v;
    cout<<"Enter a and b:"<<endl;
    cin>>t;
    cin>>v;
    int x;
    x=power(t,v);
    cout<<x;
}