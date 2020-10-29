#include <iostream>
#include <math.h>
using namespace std;
int main () {
    long int n, num, i, dig, sum = 0, k, m;
    cout << "Enter any number: " << endl;
    cin >> num;
    cout << "Armstrong numbers between 1 to " << num << " are:" << endl;
        for (n = 1; n< num; n++) {
        i = n;
        while (i>0) {
        k = 0;
        m = n;
        while (m>0) {
            m = m/10;
            k++;
        }
        dig = i%10;
        sum = sum + (pow(dig,k)+0.5);
        i = i/10;
        }
            if (sum == n )
            cout << n << endl;
            sum = 0;


    }

}
