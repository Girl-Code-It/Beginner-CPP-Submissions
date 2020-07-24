using namespace std;
#include<iostream>

int main()
{
    int a[50],i,siz,temp;

    cout<<"Enter the size of array :";
    cin>>siz;

    for(i=0;i<siz;i++)
    {
        cout<<"Enter number "<<i+1<<" =";
        cin>>a[i];
    }
    temp=a[siz-1];
    for(i=siz-2;i>=0;i--)
    {
        a[i+1]=a[i];
    }
    a[0]=temp;

    cout<<"\n New array :";
    for(i=0;i<siz;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}

