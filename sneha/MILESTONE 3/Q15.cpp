#include <iostream>
using namespace std;
int main()
{
    int n;int prod=1;int r;
    cin>>n;
    while(n>0)
    {
        r=n%10;
        prod=prod*r;
        n=n/10;
        }


    cout<<prod;
     return 0;
}

