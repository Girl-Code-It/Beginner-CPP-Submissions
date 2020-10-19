#include<iostream>
using namespace std;

int floor_value(int *arr,int n,int x)
{
    static int i=0;
    if(i==n)
    return arr[n-1];
    else
    if(arr[i-1]<x&&arr[i]>=x)
    {
     return arr[i-1];
    
    }
     i++;
    floor_value(arr,n,x);
}
int main()
{
    int n,q,ans=0;
    cin>>n>>q;
    int a[n],b;
    for(int i=0;i<n;i++)
    cin>>a[i];
    QuickSort(a,0,n-1);
    while(q--)
    {
    cin>>b;
    for(int i=0;i<n;i++)
    {
    if(a[i]<=b)
   {
    ans=(b++);
            }
        }
    }
    
}

