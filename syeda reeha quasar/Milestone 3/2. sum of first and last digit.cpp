#include<iostream>
using namespace std;
int main () {
    int a, b,l;
    cout << "Enter a number" << endl;
    cin >> a;
    b = a%10;
 if (a>9) {
    int d = 10, c = 99;
    do
    {
            c = a/d;
            d = d*10;
    }
            while (c >= 9);
            cout << "The first digit is " << c << endl;
            l = c;
 }
else
{
    cout << "The first digit is " << a << endl;
    l = a;
}
cout << "The last digit is " << b << endl;
cout<< "Sum of first and last digits are = " << l+b;
}
