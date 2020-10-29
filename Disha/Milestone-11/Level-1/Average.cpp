using namespace std;
#include<iostream>
int main()
{
    int a[40],siz,i,sum=0,large,small;
    float avg;
    cout<<"Enter size of array :";
    cin>>siz;

    for(i=0;i<siz;i++)
    {
        cout<<"Enter number "<<i+1<<" :";
        cin>>a[i];
        sum+=a[i];
    }
    large=small=a[0];
    avg=sum/siz;
    for(i=1;i<siz;i++)
    {
        if(a[i]<small)
            small=a[i];
        else if(a[i]>large)
            large=a[i];
    }
    cout<<"\n Sum="<<sum<<"\n Average ="<<avg<<"\n Largest number ="<<large<<"\n Smallest number ="<<small<<endl;

    return 0;
}

