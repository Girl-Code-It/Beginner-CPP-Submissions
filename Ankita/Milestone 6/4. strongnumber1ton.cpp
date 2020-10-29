#include <iostream>
using namespace std;
int main () {
    long int num, sum = 0, i, dig, n, k;
    cout << "Enter any number: " << endl;
    cin >> n;
    cout << "Strong numbers between 1 and " << n << " are:" << endl;
    for (num = 1; num<n; num++) {
    i = num;
    while (i>0) {
        dig = i%10;
        if (dig != 0) {
        for (k = dig-1; k>0; k--){
            dig = dig*k;
            }
        }
        else
            dig = 1;
        sum = sum+dig;
        i = i/10;
        }
    if (sum == num)
        cout << num << endl;
        sum = 0;

    }
}
