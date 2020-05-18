#include <iostream>
using namespace std;
int main () {
    long int a, b, c;
    cout << "Enter a number:" << endl;
    cin >> a;
    for (b = 2; b < a; b++)
    {
        c = a%b;
        if (c != 0)
            cout << "The given number is a prime number." << endl;
        else
            cout << "The given number is not a prime number." << endl;
    }
}
