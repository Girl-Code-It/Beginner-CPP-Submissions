#include <iostream>
using namespace std;
int multiply(int a, int b);

int main()
{
    int a, b;
    cout<<"enter first number : "<<endl;
    cin>>a;
    cout<<"enter second number : "<<endl;
    cin>>b;

    cout<<"sum of "<<a<<" and "<<b<<" : "<<multiply(a,b);

    return 0;
}

int multiply(int a, int b)
{
    return(a*b);
}
