#include<iostream>
using namespace std;

int main()
{
    int n, x = 1;

    cout<<"\n Enter a number: ";
    cin>>n;

    cout<<"\n Natural numbers in reverse order from "<<n<<" to "<<x<<" are :\n";

    while(n >= x)
    {
        cout<<" "<<n<<endl;
        n--;
    }

    return 0;
}
