#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"\n Enter  number: ";
    cin>>n;

    if(n<0)
        cout<<"\n Absolute value is: "<<(-1*n);
    else
        cout<<"\n Absolute value is: "<<n;

    return 0;
}
