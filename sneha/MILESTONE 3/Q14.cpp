#include <iostream>
using namespace std;
int main()
{
    int n;int sum=0;int r;
    cin>>n;
    while(n>0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
        }


    cout<<sum;
     return 0;
}
