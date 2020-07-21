using namespace std;
#include<iostream>
int armstrong(int l,int u)
{
      int num,sum;
    for(int i=l;i<=u;i++)
    {
        num=i;
        sum=0;
        while(num!=0)
        {
            sum=(sum*10)+(num%10);
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

    cout<<"\n Armstrong numbers between "<<lower<<"-"<<upper<<" are :";
    armstrong(lower,upper);
    return 0;
}
