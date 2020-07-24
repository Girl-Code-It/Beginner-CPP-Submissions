using namespace std;
#include<iostream>

int main()
{
    int a[50],siz,i,max1,min1;
    cout<<"Enter the size of array :";
    cin>>siz;
    for(i=0;i<siz;i++)
    {
        cout<<"Enter number "<<i+1<<" :";
        cin>>a[i];
    }
    max1=min1=a[0];
    for(i=1;i<siz;i++)
    {
        if(a[i]<min1)
        {
            min1=a[i];
        }
        else if(a[i]>max1)
        {
            max1=a[i];
        }
    }
    cout<<"\n Maximum Number ="<<max1<<"\n Minimum number ="<<min1;
    return 0;
}

