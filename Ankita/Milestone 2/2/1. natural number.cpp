#include<iostream>
using namespace std;
int main () {
    int n, x;
    cout << "Enter any number" << endl;
    cin >> n;
    for (x = 1 ; x <= n ; x = x+1) {
        cout << "->" << x << endl;
    }
    return 0;
}
