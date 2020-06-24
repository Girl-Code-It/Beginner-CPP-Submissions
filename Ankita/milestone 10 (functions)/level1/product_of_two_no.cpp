#include <iostream>
using namespace std;
void product (int a, int b, double c, double d)
{
    cout << "product = " << a*b*c*d;
}
int main ()
{
    int a = 1, b = 1;
    double c = 1, d = 1;
    char dt1, dt2;
    cout << "Is first number an integer? (Y/N)\n";
    cin >> dt1;
    cout << "Enter first number:\n";
    if (dt1 == 'y' || dt1 == 'Y')
        cin >> a;
    else
        cin >> c;
    cout << "Is second number an integer? (Y/N)\n";
    cin >> dt2;
    cout << "Enter second number:\n";
    if (dt2 == 'y' || dt2 == 'Y')
        cin >> b;
    else
        cin >> d;
    product (a, b, c, d);
}
