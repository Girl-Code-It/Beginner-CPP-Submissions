/*
Input any number. Find the sum of the digits of the number using a recursive function.

*/
#include <iostream>

using namespace std;

int getSum(int n)
{
    if(n == 0) return 0;
    return n%10 + getSum(n/10);
}
int main()
{
    int n;
    cout<<"Enter a number: "; cin>>n;

    cout<<getSum(n)<<endl;

    return 0;
}