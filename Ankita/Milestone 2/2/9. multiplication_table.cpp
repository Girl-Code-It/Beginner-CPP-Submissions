#include<iostream>
using namespace std;
int main () {
    int n, i, sum;
    cout << "Enter a number" << endl;
    cin >> n;
    i = 1;
    while (i <= 10) {
        cout << n << " * " << i << " = " << n*i << endl;
        i++;
    }
    return 0;
}
