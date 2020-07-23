using namespace std;
#include<iostream>
int main()
{
    int a[10],i,siz,sum=0,prod=1;

    cout<<"\n Enter the size of array :";
    cin>>siz;

    for(i=0;i<siz;i++)
    {
        cout<<"Enter number "<<i+1<<" :";
        cin>>a[i];
        sum+=a[i];
        prod*=a[i];
    }
    cout<<"\n Sum of elements of array :"<<sum;
    cout<<"\n Product of elements of array :"<<prod;

    return 0;
}

