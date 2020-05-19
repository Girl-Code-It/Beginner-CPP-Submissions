#include <iostream>
using namespace std;
int add(int a, int b);

int main()
{
    int a, b;
    cout<<"enter first number : "<<endl;
    cin>>a;
    cout<<"enter second number : "<<endl;
    cin>>b;

    cout<<"sum of "<<a<<" and "<<b<<" : "<<add(a,b);

    return 0;
}

int add(int a, int b)
{
    return(a+b);
}
