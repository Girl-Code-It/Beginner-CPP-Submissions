using namespace std;
#include<iostream>
int main()
{
    int i,a[50],siz,num,pos,temp;
    cout<<"\n Enter the size of array :";
    cin>>siz;
    for(i=0;i<siz;i++)
    {
        cout<<"Enter number "<<i+1<<" :";
        cin>>a[i];
    }

    cout<<"\n Enter the element you want to insert in the array :";
    cin>>num;
    cout<<"\n Enter the position you want to insert :";
    cin>>pos;

    if(pos<=0)
        cout<<"\n Invaid input";
    else
    {
        for(i=siz;i>=pos;i--)
        {
            a[i]=a[i-1];
        }
        a[pos-1]=num;

        cout<<"\n New array :";
        for(int i=0;i<=siz;i++)
        {
            cout<<a[i]<<" ";
        }
    }

    return 0;
}

