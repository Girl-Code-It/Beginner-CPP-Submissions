using namespace std;
#include<iostream>
int main()
{
    int i,a[50],siz,pos,temp;
    cout<<"\n Enter the size of array :";
    cin>>siz;
    for(i=0;i<siz;i++)
    {
        cout<<"Enter number "<<i+1<<" :";
        cin>>a[i];
    }

    cout<<"\n Enter the position of the number you want to delete:";
    cin>>pos;

    if(pos<=0 || pos>siz)
        cout<<"\n Invaid input";
    else
    {
        for(i=pos;i<siz;i++)
        {
            a[i-1]=a[i];
        }

        cout<<"\n New array :";
        for(int i=0;i<siz-1;i++)
        {
            cout<<a[i]<<" ";
        }
    }
    return 0;
}


