#include <iostream>
using namespace std;
int main()
{
    int n, a;
    cout << "which table do you want to print?" << endl;
    cin >> a;
    for (n = 1; n <= 10; n++)
        cout << endl << a << "*" << n << "=" << n * a << endl;
}
