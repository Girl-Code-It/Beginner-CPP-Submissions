using namespace std;
#include<iostream>
int main()
{
    int a[50],b[50],c[50],i,siz1,siz2,k=0;

    cout<<"Enter the size of first array :";
    cin>>siz1;

    cout<<"Enter the size of 2nd array :";
    cin>>siz2;

    cout<<"\n Enter the elements of first array "<<endl;
    for(i=0;i<siz1;i++)
    {
        cout<<"Enter number "<<i+1<<" :";
        cin>>a[i];
    }

     cout<<"\n Enter the elements of second array "<<endl;
    for(i=0;i<siz2;i++)
    {
        cout<<"Enter number "<<i+1<<" :";
        cin>>b[i];
    }

    for(i=0;i<siz1;i++)
    {
        c[k]=a[i];
        k++;
    }
    for(i=0;i<siz2;i++)
    {
        c[k]=b[i];
        k++;
    }

    cout<<"\n Elements of third array are :";
    for(i=0;i<k;i++)
    {
        cout<<c[i]<<" ";
    }
    return 0;
}
