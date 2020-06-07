#include<iostream>
using namespace std;

int main()
{
    int i, n;
    cout<<"\n Enter a number: ";
    cin>>n;

    for(i=1; i<=10; i++)
    {
        cout<<"\n "<<n<<" x "<<i<<" = "<<n*i<<"\n ";
    }
        return 0;
}
