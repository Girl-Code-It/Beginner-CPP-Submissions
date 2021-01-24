/*
Define a function to calculate power of a number raised to other i.e. 
ab using recursion where the numbers 'a' and 'b' are to be entered by the user

*/
#include <iostream>

using namespace std;

int power(int a, int b, int res)
{
    if(b == 0) return res;
    return power(a,b-1,res*a);
}
int main()
{
    int a, b;
    cout<<"Enter the number: "; cin>>a;
    cout<<"Enter the power: "; cin>>b;

    cout<<a<<" raised to the power "<<b<<" is "<<power(a,b,1);

    return 0;
}