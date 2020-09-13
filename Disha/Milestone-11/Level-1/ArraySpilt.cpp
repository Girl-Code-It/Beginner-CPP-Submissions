using namespace std;
#include<iostream>
int main()
{
    int a[50],b[50],c[40],siz,i,j=0,k=0;

    cout<<"Enter the size of array :";
    cin>>siz;
    for(i=0;i<siz;i++)
    {
        cout<<"Enter number "<<i+1<<" =";
        cin>>a[i];
    }

    for(i=0;i<siz;i++)
    {
        if(i<siz/2)
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
    cout<<"\n Elements of 2nd array :";
    for(int i=0;i<j;i++)
    {
        cout<<b[i]<<" ";
    }

     cout<<"\n Elements of 3rd array :";
    for(int i=0;i<k;i++)
    {
        cout<<c[i]<<" ";
    }

    return 0;
}


