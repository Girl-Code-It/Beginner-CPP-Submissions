#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a[10],n,b,i,temp,j;
    cout<<"Enter the no. of elements to be entered : "<<endl;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
        temp=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            if(a[i]<a[j])
               {
                   temp=a[j];
                   a[j]=a[i];
                   a[i]=temp;
               }
        }
            cout<<"Max : "<<a[0]<<" "<<a[n-1]<<endl;
            cout<<"Min : "<<a[0]<<" "<<a[1];
    return 0;
}
