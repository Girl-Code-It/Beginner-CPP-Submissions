#include<iostream>
using namespace std;
    int main () {
        int n, x;
        cout << "Enter a number" << endl;
        cin >> n;
        for (x = n; x>0; x = x-1) {
            cout << "-> " << x << endl;
        }
        return 0;
    }
