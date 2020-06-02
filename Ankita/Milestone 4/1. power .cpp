#include <iostream>
using namespace std;
int main () {
   long int a, b, c, i;
    cout << "Enter any base number." << endl;
    cin >> a;
    cout << "Enter the exponent." << endl;
    cin >> b;
    c = a;
    for (i = 1; i != b; i++ ) {
        c = c*a;
    }
    cout << a << " to the power of " << b << " is " << c << endl;
}
