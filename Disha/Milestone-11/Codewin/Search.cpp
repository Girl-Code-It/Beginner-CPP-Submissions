using namespace std;
#include<iostream>

int main()
{
    int a[50],siz,i,val,flag=0;

    cout<<"\n Enter the size of array :";
    cin>>siz;

    for(i=0;i<siz;i++)
    {
        cout<<"Enter number "<<i+1<<" :";
        cin>>a[i];
    }

    cout<<"Enter the value to be searched :";
    cin>>val;

    for(i=0;i<siz;i++)
    {
        if(a[i]==val)
        {
            cout<<"\n Value found at index "<<i+1<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"\n Value not found ";
    }
    return 0;
}
