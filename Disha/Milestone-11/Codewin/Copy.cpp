using namespace std;
#include<iostream>
int main()
{
    int i,a[50],siz,b[50];
    cout<<"\n Enter the size of array :";
    cin>>siz;
    for(i=0;i<siz;i++)
    {
        cout<<"Enter number "<<i+1<<" :";
        cin>>a[i];
        b[i]=a[i];
    }
    cout<<"\n Elements of 2nd array are :";
    for(int i=0;i<siz;i++)
    {
        cout<<b[i]<<" ";
    }
    return 0;
}
