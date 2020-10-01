#include<iostream>
using namespace std;
int main()
{
    int a[50],siz,_count=0,i;

    cout<<"\n Enter the size of array :";
    cin>>siz;

    for(i=0;i<siz;i++)
    {
        cout<<"Enter number "<<i+1<<" :";
        cin>>a[i];

    }
    for(i=0;i<siz;i++)
    {

        for(int j=i+1;j<siz;j++)
        {
            if(a[i]==a[j])
            {
                _count++;
                break;
            }
        }
    }
    cout<<"\n Total number of duplicates="<<_count;
    return 0;
}
