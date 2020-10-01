#include<iostream>
using namespace std;
void multiply(int a[4][6])
{
    int prod;
    for(int i=0;i<4;i++)
    {
        prod=1;
        for(int j=0;j<6;j++)
        {
            prod*=a[i][j];
        }
        cout<<"\n Product of element of row "<<i+1<<" ="<<prod;
    }
}

int main()
{
    int a[4][6];

    for(int i=0;i<4;i++)
    {
        cout<<"\n Enter the elements of row "<<i+1<<" :";
        for(int j=0;j<6;j++)
        {
            cin>>a[i][j];
        }
    }

    multiply(a);
    return 0;
}
