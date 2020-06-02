#include<iostream>
using namespace std;
int main () {
    int a, b, c;
    cout << "Enter a number." << endl;
    cin >> a;
    b = 1;
    while (a>0) {
        c = a%10;
        b = c*b;
        a = a/10;
    }
    cout << "Product of digits is " << b << endl;
}
