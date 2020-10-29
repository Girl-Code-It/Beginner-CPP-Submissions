#include <iostream>
using namespace std;

int main()
{
    int num,p,n;

    cout<<"\n Enter a number: ";
    cin>>num;
    p=num;

    while(p>=10)
    {
        p/=10;
    }
        cout<<"\n The first digit is: "<<p;
        cout<<"\n The last digit is: "<<num%10;
        return 0;
}
