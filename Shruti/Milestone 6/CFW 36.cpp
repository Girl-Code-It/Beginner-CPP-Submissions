#include <iostream>
using namespace std;

int main()
{
    int a, b, c, i, terms;

    cout<<"\n Enter the number of terms: ";
    cin>>terms;

    a = 0;
    b = 1;
    c = 0;

    cout<<"\n Fibonacci terms: ";


    for(i=1; i<=terms; i++)
    {
        cout<<c<<" ";

        a = b;
        b = c;
        c = a + b;
    }

    return 0;
}
