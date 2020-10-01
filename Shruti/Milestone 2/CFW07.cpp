#include<iostream>
using namespace std;

int main()
{
    int i, n, sum=0;
    cout<<"\n Enter a number: ";
    cin>>n;

    for(i=2; i<n; i+=2)
    {
        sum+=i;
    }

        cout<<"\n Sum of all even numbers between 1 and "<<n<<" is: "<<sum;
        return 0;
}
