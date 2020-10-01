using namespace std;
#include<iostream>

int main()
{
    int a[50],i,siz,min1,temp,j;

    cout<<"Enter the size of array :";
    cin>>siz;

    for(i=0;i<siz;i++)
    {
        cout<<"Enter number "<<i+1<<" =";
        cin>>a[i];
    }

    for(i=0;i<siz;i++)
    {
        min1=i;
        for(j=i+1;j<siz;j++)
        {
            if(a[i]>a[j])
            {
                min1=j;
            }
        }
        temp=a[i];
        a[i]=a[min1];
        a[min1]=temp;
    }

    cout<<"\n New array :";
    for(i=0;i<siz;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
