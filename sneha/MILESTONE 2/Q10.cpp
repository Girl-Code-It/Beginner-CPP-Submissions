#include <iostream>
using namespace std;
int main()
{
    long n;
    cin>>n;
    int j=0;
    while(n>0)
    {
        int r=n%10;
        j++;
        n=n/10;
    }cout<<j;
    return 0;
}
