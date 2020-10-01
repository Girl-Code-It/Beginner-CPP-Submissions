using namespace std;
#include<iostream>
int main()

{
    unsigned int a[50],siz,min1,min2,max1,max2,maxDiff,minDiff,i;
    cout<<"\n Enter the size of array :";
    cin>>siz;

    for(i=0;i<siz;i++)
    {
        cout<<"Enter number "<<i+1<<" :";
        cin>>a[i];
    }
    //to find max,min difference
    max1=min1=a[0];
    min2=max2=a[1];

    maxDiff=minDiff=a[1]-a[0];

    for(i=3;i<siz;i+=2)
    {
        if((a[i-1]-a[i])>maxDiff)
        {
            max1=a[i];
            max2=a[i-1];
        }
        else if((a[i-1]-a[i])<minDiff)
        {
            min1=a[i];
            min2=a[i-1];
        }
    }
    cout<<"\n Pair having maximum difference are :"<<max1<<","<<max2;
    cout<<"\n Pair having minimum difference are :"<<min1<<","<<min2;
    return 0;
}
