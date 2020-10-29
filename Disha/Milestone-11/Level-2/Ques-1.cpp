using namespace std;
#include<iostream>

int main()
{
    int a[50],i,siz,max1,max2,j;

    cout<<"Enter the size of array :";
    cin>>siz;

    for(i=0;i<siz;i++)
    {
        cout<<"Enter number "<<i+1<<" =";
        cin>>a[i];
    }

    max1=max2=a[0];
    for(i=0;i<siz;i++)
    {
        if(a[i]>max1)
        {
            max2=max1;
            max1=a[i];
        }
        else if(a[i]<max1 && a[i]>max2)
        {
            max2=a[i];
        }
    }

    for(i=0;i<siz;i++)
    {
        if(a[i]==max1)
        {
            a[i]=max2;
            for( j=siz;j>=i+2;j--)
            {
                a[j]=a[j-1];
            }
            a[j]=max1-max2;
        }
    }

    cout<<"\n New array :";
    for(i=0;i<=siz;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
