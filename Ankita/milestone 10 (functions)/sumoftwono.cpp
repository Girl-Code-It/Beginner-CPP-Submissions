#include <iostream>
using namespace std;
void sum (int a, int b, double c, double d)
{
    cout << "sum = " << a+b+c+d;
}
int main ()
{
    int a = 0, b = 0;
    double c = 0, d = 0;
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
    sum (a, b, c, d);
}
