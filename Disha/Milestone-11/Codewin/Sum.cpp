using namespace std;
#include<iostream>
int sumall(int a[30],int siz,int start=0,int sum=0)
{
    if(start<siz)
    {
        sum+=a[start];
        start++;
        sumall(a,siz,start,sum);
    }
    else if(start==siz)
        return sum;
}

int main()
{
    int a[50],siz,i;
    cout<<"Enter the size of array :";
    cin>>siz;
    for(i=0;i<siz;i++)
    {
        cout<<"Enter number "<<i+1<<" :";
        cin>>a[i];
    }
    cout<<"\n Sum of all numbers ="<<sumall(a,siz);

    return 0;
}
