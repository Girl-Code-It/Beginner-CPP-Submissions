using namespace std;
#include<iostream>
int perfect(int l,int u)
{
      int sum;
    for(int i=l;i<=u;i++)
    {
        sum=0;
        for(int j=1;j<i;j++)
        {
            if(i%j==0)
                sum+=j;
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

    cout<<"\n Perfect numbers between "<<lower<<"-"<<upper<<" are :";
    perfect(lower,upper);
    return 0;
}
