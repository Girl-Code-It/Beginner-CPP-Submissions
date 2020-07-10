#include<iostream>
#include<cstdlib>

using namespace std;

int sum(int , int);

int main()
{
    //program to print sum of two numbers
    int a, b;
    cout << "Enter two numbers to get their sum : ";
    cin >> a >> b;
    cout << "The sum of " << a << " and " << b << " is " << sum(a,b);
}

int sum(int x, int y)
{
    return x+y;
}
