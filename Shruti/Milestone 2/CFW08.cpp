#include<iostream>
using namespace std;

int main()
{
    int i, n, sum=0;
    cout<<"\n Enter a number: ";
    cin>>n;

    for(i=1; i<n; i+=2)
    {
        sum+=i;
    }

        cout<<"\n Sum of all odd numbers between 1 and "<<n<<" is: "<<sum;
        return 0;
}
