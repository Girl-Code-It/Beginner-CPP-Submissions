/*
Define two functions to print the maximum 
and the minimum number respectively among three numbers entered by user.

*/
#include <iostream>
using namespace std;

int maxOfThree(int a, int b, int c)
{
    return a > b ? a > c ? a : c : b > c ? b : c;
}
int minOfThree(int a, int b, int c)
{
    return a < b ? a < c ? a : c : b < c ? b : c;
}
int main()
{
    int a, b, c;
    cout<<"Enter first number: "; cin>>a;
    cout<<"Enter second number: "; cin>>b;
    cout<<"Enter third number: "; cin>>c;

    cout<<"Maximun of three: "<<maxOfThree(a,b,c)<<endl;
    cout<<"Minimun of three: "<<minOfThree(a,b,c)<<endl;
    return 0;
}