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
        temp=a[0];
        for( j=1;j<siz;j++)
        {
            a[j-1]=a[j];
        }
        a[j-1]=temp;
    }

    cout<<"\n Array after rotating "<<pos<<" times to left:";
    for(i=0;i<siz;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
