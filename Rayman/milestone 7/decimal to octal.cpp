#include <iostream>
using namespace std;
int main()
{
    int decimal, rem, octal=0, place=1, n;
    cout<<"Enter a decimal number : "<<endl;
    cin>>decimal;
    cout<<"octal number : ";
    for (n=decimal; n>0 ;n=n/8)
    {
        rem=n%8;
        octal = rem*place + octal;
        place*=10;
    }
    cout<<octal;
}
