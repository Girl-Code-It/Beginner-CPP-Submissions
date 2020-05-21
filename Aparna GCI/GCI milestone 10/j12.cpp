#include<iostream>
#include<stdio.h>
using namespace std;
void perf(int,int);
int main()
{
    int a,b;
    cout<<"Enter the range : "<<endl;
    cin>>a>>b;
    perf(a,b);
    return 0;
}
void perf(int x,int y)
{
    for(int i=x;i<=y;i++)
    {
        int f=0;
        int n=i;
        for(int j=1;j<i;j++)
        {
            if(i%j==0)
            {
                f+=j;
            }
        }
        if(n==f)
        {
            cout<<n<<" ";
        }
    }
}
