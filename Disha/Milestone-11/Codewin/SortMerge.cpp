using namespace std;
#include<iostream>
int main()
{
    int a[50],b[50],c[100],siz1,siz2,i=0,j=0,k=0;

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
    i=0;

    while(i<siz1 && j<siz2)
    {
        if(a[i]<b[j])
        {
            c[k]=a[i];
            i++;
            k++;
        }
        else if(a[i]>b[j])
        {
            c[k]=b[j];
            j++;
            k++;
        }
    }
    while(i<siz1)
    {
        c[k]=a[i];
        i++;
        k++;
    }
    while(j<siz2)
    {
        c[k]=b[j];
        j++;
        k++;
    }

    cout<<"Elements of third array ";
    for(i=0;i<k;i++)
    {
        cout<<c[i]<<" ";
    }
    return 0;
}
