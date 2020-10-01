#include<iostream>
using namespace std;
int main () {
    int a, b, c, k, n ;
    cout << "Enter a number." << endl;
    cin >> a;
for ( b = 0; b<10; b++)
{
    cout << "The frequency of " << b << "=";
    n = 0;
    for (c = a; c>0; c = c/10)
    {
        k = c%10;
        if (k==b) {
            n++;
        }
    }
    cout << n <<endl;
}
}
