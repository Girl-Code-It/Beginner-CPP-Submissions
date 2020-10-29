using namespace std;
#include<iostream>

int _sort(int a[50],int stop,int start)
{
    int i,temp;
     for(i=start;i<stop;i++)
    {
        for(int j=i+1;j<stop;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}


int main()
{
    int a[50],siz,i,temp,even=0;

    cout<<"\n Enter the size of array :";
    cin>>siz;

    for(i=0;i<siz;i++)
    {
        cout<<"Enter number "<<i+1<<" :";
        cin>>a[i];
        if(a[i]%2==0)
            even++;
    }

    for(i=0;i<siz;i++)
    {
        if(a[i]%2!=0)
        {
            for(int j=i+1;j<siz;j++)
            {
                if(a[j]%2==0)
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                    break;
                }
            }
        }
    }

   _sort(a,even,0);
   _sort(a,siz,even);

    cout<<"\n Sorted array =";
    for(i=0;i<siz;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}
