using namespace std;
#include<iostream>
int main()
{
    int a[10],i;
    for(i=0;i<10;i++)
    {
        cout<<"Enter a number :";
        cin>>a[i];
    }

    for(i=0;i<10;i++)
    {
        cout<<endl<<"Element "<<i+1<<"="<<a[i];
    }

    return 0;
}
