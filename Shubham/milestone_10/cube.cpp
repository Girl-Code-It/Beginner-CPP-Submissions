#include<cstdlib>
#include<iostream>

using namespace std;

int cube(int);

int main()
{
    int num;
    cout << "Enter a number to find it's cube" << endl;
    cin >> num;
    cout << "Cube of " << num << " is " << cube(num) << endl;
}

int cube(int x)
{
    return (x*x*x);
}
