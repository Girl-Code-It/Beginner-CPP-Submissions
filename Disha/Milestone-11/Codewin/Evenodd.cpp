using namespace std;
#include<iostream>
int main()
{
    int a[50],siz,i,b[50],c[50],j=0,k=0;

    cout<<"\n Enter the size of array :";
    cin>>siz;

    for(i=0;i<siz;i++)
    {
        cout<<"Enter number "<<i+1<<" :";
        cin>>a[i];
        if(a[i]%2==0)
        {
            b[j]=a[i];
            j++;
        }
        else
        {
            c[k]=a[i];
            k++;
        }
    }

    cout<<"\n Even elements of array :";
    for(i=0;i<j;i++)
    {
        cout<<b[i]<<" ";
    }

    cout<<"\n Odd elements of array :";
    for(i=0;i<k;i++)
    {
        cout<<c[i]<<" ";
    }
    return 0;
}

