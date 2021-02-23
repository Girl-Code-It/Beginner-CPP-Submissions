#include <iostream>
using namespace std;
int main()
{
    int n;int j=0;int r; int sum=0;
    cin>>n;
    while(n>0)
    {
        r=n%10;
        j++;
        n=n/10;
        if(j==1)
           {

           sum=sum+r;}

    }
    sum=sum+r;
    cout<<sum;
     return 0;
}

