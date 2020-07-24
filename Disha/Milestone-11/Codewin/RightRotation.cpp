using namespace std;
#include<iostream>
int main()
{
    int a[50],i,siz,pos,temp,j;

    cout<<"\n Enter the size of array :";
    cin>>siz;

    for(i=0;i<siz;i++)
    {
        cout<<"Enter number "<<i+1<<" :";
        cin>>a[i];
    }

    cout<<"\n Input number of times to rotate :";
    cin>>pos;

    for(i=0;i<pos;i++)
    {
        temp=a[siz-1];
        for(j=siz-2;j>=0;j--)
        {
            a[j+1]=a[j];
        }
        a[0]=temp;
    }

    cout<<"\n Array after rotating "<<pos<<" times to right :";
    for(i=0;i<siz;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
