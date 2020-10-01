using namespace std;
#include<iostream>
int main()
{
    int a[50],siz,i,negative=0;
    cout<<"Enter the size of array :";
    cin>>siz;
    for(i=0;i<siz;i++)
    {
        cout<<"Enter number "<<i+1<<" :";
        cin>>a[i];
        if(a[i]<0)
            negative++;
    }
    cout<<"\n Total number of negative number ="<<negative;
    return 0;
}
