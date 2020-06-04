#include<iostream>
using namespace std;
int main () {
    long int a, b;
    cout << "Enter a number" << endl;
    cin >> a;
    b = a%10;
    cout << "the last digit is "<< b << endl;
 if (a>9) {
    do
    {
            a = a/10;
    }
            while (a > 9);
 }

cout << "The first digit is " << a << endl;
}
