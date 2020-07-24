#include<iostream>
using namespace std;
int main()
{
    int a[50],siz,uni[50],i;

    cout<<"\n Enter the size of array :";
    cin>>siz;

    for(i=0;i<siz;i++)
    {
        cout<<"Enter number "<<i+1<<" :";
        cin>>a[i];
        uni[i]=0;
    }

    cout<<"Unique elements are :";
    for(i=0;i<siz;i++)
    {

        for(int j=i+1;j<siz;j++)
        {
            if(a[i]==a[j])
            {
                uni[j]= 1;
            }
        }
        if(uni[i]==0)
        {
           cout<<a[i]<<" ";
        }
    }
    return 0;

}
