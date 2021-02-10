/*
Using recursion, define a function to know nth term of a Fibonacci series.
Nth term of Fibonacci series is
F(n) = F(n-1)+F(n-2)
F(0) = 0
F(1) = 1
F(2) = F(1)+F(0) = 1+0 = 1
F(3) = F(2)+F(1) = 1+1 = 2
F(4) = F(3)+F(2) = 2+1 = 3

*/
#include <iostream>

using namespace std;

int getFibo(int a)
{
    if(a <= 1 ) return 1;
    return getFibo(a-1) + getFibo(a-2);
}
int main()
{
    int a;
    cout<<"Enter the number: "; cin>>a;

    cout<<"The "<<a<<"th term is "<<getFibo(a);

    return 0;
}