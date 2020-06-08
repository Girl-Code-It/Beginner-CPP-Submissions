#include <iostream>

using namespace std;

int main()
{
    int num,a,b,c,i;

    cout<< "Enter number for Fibonacci series \n";
    cin>>num;

    a=0;
    b=1;
    c=0;

    cout<< "The terms are : \n";

    for(i=1;i<=num;i++)
    {
        cout<<c<< ",";

        a = b;
        b = c;
        c = a+b;



    }

    return 0;
}
