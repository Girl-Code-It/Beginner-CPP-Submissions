#include<iostream>
using namespace std;
int main () {
    long int num1, num2, fac1, i, fac2;
    cout << "Enter two numbers: " << endl;
    cin >> num1 >> num2;
    if (num1<num2) {
        i = num1;
        while (i>0) {
            fac1 = num1%i;
            if (fac1 == 0) {
                fac2 = num2%i;
                if ( fac2 == 0) {
                    cout << " H.C.F of " << num1 << " and " << num2 << " is: " << i;
                    break;
                }

            }
            i--;
        }
    }
    else if ( num2<num1) {
             i = num2;
        while (i>0) {
            fac2 = num2%i;
            if (fac2 == 0) {
                fac1 = num1%i;
                if ( fac1 == 0) {
                    cout << " H.C.F of " << num1 << " and " << num2 << " is: " << i;
                    break;
                }
            }
            i--;

        }
    }
    else if ( num1 == num2)
        cout << " H.C.F of " << num1 << " and " << num2 << " is: " << num1;
}
