#include<iostream>
#include<cstdlib>

using namespace std;

int product(int , int);

int main()
{
    //program to print sum of two numbers
    int a, b;
    cout << "Enter two numbers to get their product : ";
    cin >> a >> b;
    cout << "The sum of " << a << " and " << b << " is " << product(a,b);
}

int product(int x, int y)
{
    return x*y;
}
