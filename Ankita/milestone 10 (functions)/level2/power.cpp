#include <iostream>
using namespace std;
inline int power (int a, int b, int k )
{
    k = k*a;
    if (b == 1)
    {
        return (k);
    }
    else
        return (power (a ,b-1, k));

}
int main ()
{
    int a, b, k = 1, result;
    cout << "Enter base: ";
    cin >> a;
    cout << "Enter exponent: ";
    cin >> b;
    result = power (a, b, k);
    cout << "result = " << result;
}
