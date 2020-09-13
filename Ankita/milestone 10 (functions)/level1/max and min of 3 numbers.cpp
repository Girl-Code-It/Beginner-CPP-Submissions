#include <iostream>
using namespace std ;
void maxim (int a, int  b, int c)
{
    if (a>b && a>c)
        cout << "Maximum among " <<a<< ", " << b << " and " << c << " is " << a;
    else if (b >a && b>c)
        cout << "Maximum among " <<a<< ", " << b << " and " << c << " is " << b;
    else
        cout << "Maximum among " <<a<< ", " << b << " and " << c << " is " << c;
}
int mini (int a, int b, int c)
{
    if (a<b && a<c)
        return (a);
    else if (b<a && b<c)
        return (b);
    else
        return (c);
}
int main ()
{
    int a, b, c, minimum;
    cout << "Enter three numbers\n";
    cin >> a;
    cin >> b;
    cin >> c;
    maxim (a, b, c);
    cout << "\n";
    minimum = mini (a, b, c);
    cout << "Minimum among " <<a<< ", " << b << " and " << c << " is " << minimum;
}
