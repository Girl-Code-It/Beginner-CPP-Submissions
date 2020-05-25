#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
int main()
{
    int t,i,f,d,rev;
    long long int n,num;
    f=rev=0;
    cout<<"Enter the no. of test cases : "<<endl;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cout<<"Enter the number : "<<endl;
        cin>>n;
        num=n;
        while(num!=0)
        {
            d=num%10;
            rev=rev*10+d;
            if(d==1||d==0||d==8)
            {
                num=num/10;
            }
            else
            {
                f=1;
                break;
            }
        }
        if(f==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            if(rev==n)
            {
                cout<<"YES"<<endl;
            }
            else
                cout<<"NO"<<endl;
        }
    }
    return 0;
}
