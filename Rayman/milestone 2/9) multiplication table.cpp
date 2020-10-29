#include <iostream>
using namespace std;
int main()
{
    int a=0, b, product;    //initialising a due to garbage value
    cout<<"enter the number : "<< a <<endl;
    cin>> a;
    for (b=1; b<=10; b++)
    {
        product=a*b;
        cout<< a << "*" << b << "=" << product <<endl;
    }
    return 0;
}
