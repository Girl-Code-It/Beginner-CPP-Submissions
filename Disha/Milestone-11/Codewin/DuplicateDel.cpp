#include<iostream>
using namespace std;
int main()
{
    int a[50],siz,i;

    cout<<"\n Enter the size of array :";
    cin>>siz;

    for(i=0;i<siz;i++)
    {
        cout<<"Enter number "<<i+1<<" :";
        cin>>a[i];

    }
    for(i=0;i<siz;i++)
    {
        for(int j=i+1;j<siz;j++)
        {
            if(a[i]==a[j])
            {
                for(int l=j;l<siz;l++)
                {
                    a[l]=a[l+1];
                }
                siz--;
            }
        }
    }
    for(i=0;i<siz;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}

