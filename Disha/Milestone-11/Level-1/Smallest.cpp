using namespace std;
#include<iostream>
int main()
{
    int a[50],i,siz,small,large;

    cout<<"\n Enter the size of array :";
    cin>>siz;

    for(i=0;i<siz;i++)
    {
        cout<<"Enter number "<<i+1<<" :";
        cin>>a[i];
    }
    small=large=a[0];
    for(i=0;i<siz;i++)
    {
        if(a[i]<small)
        {
            small=a[i];
        }
        if(a[i]>large)
        {
            large=a[i];
        }
    }
    cout<<"\n Smallest elements of array :"<<small;
    cout<<"\n Largest elements of array :"<<large;

    return 0;
}

