#include <iostream>
using namespace std;
int main () {
    long int num, mod, sum = 0, i;
    cout << "Enter any number: "<< endl;
    cin >> num;
    for (i = 1; i<num; i++) {
        mod = num%i;
        if (mod == 0) {
            sum = sum+i;
        }
    }
    if (sum == num)
        cout << num << " is  perfect number.";
    else
        cout << num << " is not a perfect number.";
}
