using namespace std;
#include<iostream>
int main()
{
    int a[10],i,siz,flag=0,j;

    cout<<"\n Enter the size of array :";
    cin>>siz;

    for(i=0;i<siz;i++)
    {
        cout<<"Enter number "<<i+1<<" :";
        cin>>a[i];
    }
    for(i=0,j=siz-1;i<=siz/2;i++,j--)
    {
        if(a[i]!=a[j])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"\n Yes elements read same both front and back";
    }
    else
    {
        cout<<"\n No elements don't read same both front and back";
    }

    return 0;
}


