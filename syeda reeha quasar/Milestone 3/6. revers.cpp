#include<iostream>
using namespace std;
int main () {
    int a, b, c;
    cout << "Enter a number." << endl;
    cin >> a;
    b = 0;
    while (a>0) {
        c = a%10;
        b = b*10+c;
        a = a/10;
    }
        cout << "Reverse of above number is " << b << endl;
}
