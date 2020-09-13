using namespace std;
#include<iostream>
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

    cout<<"\n Reversed array =";
     for(i=siz-1;i>=0;i--)
    {
        cout<<a[i]<<" ";

    }
    return 0;
}
