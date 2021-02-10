#include <iostream>
using namespace std;
int main()
{
    int n;int j=0;int r;
    cin>>n;
    while(n>0)
    {
        r=n%10;
        j++;
        n=n/10;
        if(j==1)
           {

           cout<<r<<endl;}

    }
    cout<<r;
     return 0;
}
