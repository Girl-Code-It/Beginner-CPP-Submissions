#include<iostream>
using namespace std;
int main()
{
    int i, j, k;
    for(i=1; i<=5; i++)
    {
        if(i%2==0)
        {
            k=2;
        }
        else
        {
            k = 1;
        }
        for(j=1; j<=i; j++,k+=2)
        {
            cout<<k;
        }
        cout<<endl;
    }
    return 0;
}
