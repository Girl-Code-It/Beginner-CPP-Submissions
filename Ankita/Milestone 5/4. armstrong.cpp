#include <iostream>
#include <math.h>
using namespace std;
int main () {
    long int num, i, dig, sum = 0, k, n;
    cout << "Enter any number: " << endl;
    cin >> num;
    k = 0;
    n = num;
    while (n>0) {
        n = n/10;
        k++;
    }
    i = num;
    while (i>0) {
        dig = i%10;
        sum = sum + (pow(dig,k)+0.5);
        i = i/10;
    }
    if (sum == num)
        cout << num << " is an armstrong number.";
    else
        cout << num << " is not an armstrong number.";
}
