#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "enter a and b" << endl;
    cin >> a >> b;
    (a > b) ? cout << a << "is greatest" : cout << b << "is greatest";
}
