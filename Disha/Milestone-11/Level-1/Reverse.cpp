using namespace std;
#include<iostream>
int main()
{
    int a[10],b[10],i,j=0;
    for(i=0;i<10;i++)
    {
        cout<<"Enter number "<<i+1<<" =";
        cin>>a[i];
    }

    for(i=9;i>=0;i--)
    {
        b[j]=a[i];
        j++;
    }
    cout<<"\n Elements of 2nd array are :";
    for(int i=0;i<10;i++)
    {
        cout<<b[i]<<" ";
    }

    return 0;
}

