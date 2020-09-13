using namespace std;
#include<iostream>
int strong(int l,int u)
{
      int num,sum,digit,fact=1;
    for(int i=l;i<=u;i++)
    {
        num=i;
        sum=0;
        while(num!=0)
        {
            fact=1;
            digit=num%10;
            for(int j=1;j<=digit;j++)
            {
                fact*=j;
            }
            sum+=fact;
            num/=10;
        }
        if(sum==i)
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

    cout<<"\n Strong numbers between "<<lower<<"-"<<upper<<" are :";
    strong(lower,upper);
    return 0;
}


