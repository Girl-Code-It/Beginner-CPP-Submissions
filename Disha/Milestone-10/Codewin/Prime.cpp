using namespace std;
#include<iostream>

int prime(int l,int u)
{
    int flag;
    for(int i=l;i<=u;i++)
    {
        flag=0;
        for(int j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }

        }
        if(flag==0)
            cout<<i<<" ";
    }
}

int main()
{
    int lower,upper;
    cout<<"\n Enter the lower limit :";
    cin>>lower;
    cout<<"\n Enter the upper limit :";
    cin>>upper;

    cout<<"\n Prime numbers between "<<lower<<"-"<<upper<<" are :";
    prime(lower,upper);
    return 0;
}
