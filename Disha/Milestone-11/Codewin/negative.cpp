using namespace std;
#include<iostream>
int main()
{
    int a[50],siz,i,negative=0;
    cout<<"Enter the size of array :";
    cin>>siz;
    for(i=0;i<siz;i++)
    {
        cout<<"Enter number "<<i+1<<" :";
        cin>>a[i];
    }
    cout<<"\n Negative number =";
    for(i=0;i<siz;i++)
    {
        if(a[i]<0)
        {
            cout<<a[i]<<" ";
        }
    }
    return 0;
}
