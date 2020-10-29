using namespace std;
#include<iostream>

int main()
{
    int a[50],siz,i,max1,max2;
    cout<<"Enter the size of array :";
    cin>>siz;
    for(i=0;i<siz;i++)
    {
        cout<<"Enter number "<<i+1<<" :";
        cin>>a[i];
    }
    max1=max2=a[0];
    for(i=1;i<siz;i++)
    {
        if(a[i]>max1)
        {
            max2=max1;
            max1=a[i];
        }
        else if(a[i]>max2 &&  a[i]<max1)
        {
            max2=a[i];
        }
    }
    cout<<"\n Seccond largest number ="<<max2;
    return 0;
}
