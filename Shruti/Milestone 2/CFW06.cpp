#include<iostream>
using namespace std;

int main()
{
    int i, n, sum=0;
    cout<<"\n Enter a number: ";
    cin>>n;

    for(i=1; i<=n; i++)
    {
        sum += i;
    }

        cout<<"\n Sum of first "<<n<<" natural numbers is: "<<sum;
        return 0;
}
