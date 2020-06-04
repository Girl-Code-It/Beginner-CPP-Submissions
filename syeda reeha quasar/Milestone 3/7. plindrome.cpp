#include<iostream>
using namespace std;
int main () {
    int a, b, c, k;
    cout << "Enter a number." << endl;
    cin >> a;
    b = 0, k = a;
    while (k>0) {
        c = k%10;
        b = b*10+c;
        k = k/10;
    }
    if (a==b) {
        cout << "This number is a palindrome." << endl;
    }
    else {
        cout << "This number is not a palindrome." << endl;
    }
}
