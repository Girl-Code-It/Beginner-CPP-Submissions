#include<iostream>
#include <math.h>
using namespace std;
int main () {
    int a, b, y, x, n = 0;
    cout << "Enter a number" << endl;
    cin >> a;
    int c = a;
    b = a%10;
    for (int k = a; k > 0; k = k/10)
    {
        n++;
    }
    n--;

    while (a>9)
        {
            a = a/10;
        }
    x = c - a * pow(10,n)- b;
    y = b * pow(10,n);
    cout << x + y + a + 1 ;
}
