#include <iostream>

using namespace std;

int main()
{
    int n,i=10,dig=0,p;

    cout<<"Enter a number :\n";
    cin>>n;

    p=n;

    while(p>=10)
    {

        p = p/10;


    }

    cout<<"The first digit is "<<p<<endl;
    cout<<"The last digit is "<<n%10<<endl;




    return 0;
}
