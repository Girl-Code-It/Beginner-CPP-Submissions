#include<iostream>
using namespace std;

int main()
{
    int n, x = 1;

    cout<<"\n Enter a number: ";
    cin>>n;

    cout<<"\n Natural numbers from "<<x<<" to "<<n<<" are :\n";

    while(x <= n)
    {
        cout<<" "<<x<<endl;
        x++;
    }

    return 0;
}
