#include <iostream>
using namespace std;
int main () {
    long int num, n, mod, sum = 0, i;
    cout << "Enter any number: "<< endl;
    cin >> n;
    cout << "Perfect numbers between 1 and " << n << " are:" << endl;
    for (num = 1; num<n; num++ ) {
    for (i = 1; i<num; i++) {
        mod = num%i;
        if (mod == 0) {
            sum = sum+i;
            }
        }
        if (sum == num)
        cout << num << endl;
        sum = 0;
    }

}
