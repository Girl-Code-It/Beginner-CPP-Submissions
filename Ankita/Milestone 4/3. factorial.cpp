#include <iostream>
using namespace std;
int main(){
    long int a, b, c, k, i;
    cout << "Enter a number." << endl;
    cin >> a;
    k = 1;
    for (c = a; c>0; c--)
    {
        k = k*c;
    }
    cout << "The factorial of given number is:" << k << endl;
}
