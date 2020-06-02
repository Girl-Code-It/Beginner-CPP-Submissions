#include<iostream>
using namespace std;
int main () {
    int n, i, sum;
    cout << "Enter a number" << endl;
    cin >> n;
    i = 1;
    sum = 0;
    while (i <= n) {
        sum += i;  // sum = sum + i;
        i += 2;  // i = i + 2;
    }
    cout << "Sum = " << sum;
    return 0;
}
