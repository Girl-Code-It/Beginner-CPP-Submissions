#include<iostream>
using namespace std;
int main () {
    long int num, i, div, k, j = 0;
    cout << "Enter any number: " << endl;
    cin >> num;
    cout << "Prime numbers between 1 and " << num << " are given below:"<< endl;
    i = 2;
    while (i<=num) {
        for (k = 2; k<i; k++ ) {
            div = i%k;
            if (div == 0) {
                j = 1;
                break;
            }
        }
        if (j == 0)
        cout << i << endl;
        i++;
        j = 0;
    }
}
