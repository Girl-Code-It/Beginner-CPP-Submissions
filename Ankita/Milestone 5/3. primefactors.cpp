#include <iostream >
using namespace std;
int main () {
    long int num, fac, i, div1, div2, j, k = 0, primefac;
    cout << "Enter any number: " << endl;
    cin >> num;
    cout << "Prime factors of " << num << " are -" <<endl;
    for (i = 1; i<=num; i++) {
        div1 = num%i;
        if (div1 == 0) {
            for (j = 2; j<i; j++) {
                div2 = i%j;
                if (div2 == 0) {
                    k=1;
                        break;
                }
            }
            if (k == 0)
            cout << i << endl;
        }
    k = 0;
    }
}
