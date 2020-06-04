#include <iostream>
using namespace std;
int main () {
    long int num1, num2, div1, div2, i;
    cout << "Enter two numbers: " << endl;
    cin >> num1 >> num2;
    if (num1 > num2) {
        div1 = num1% num2;
        if (div1 == 0)
            cout << "L.C.M of " << num1 << " and " << num2 << " is: " <<num1;
        else {
            i = 2;
            while (div2 != 0) {
                div2 = (num2*i)%num1;
                if ( div2 == 0)
                    break;
                i++;
            }
            cout << "L.C.M of " << num1 << " and " << num2 << " is: " << num2*i;
        }
    }
    else if (num2 > num1) {
        div2 = num2% num1;
        if (div2 == 0)
            cout << "L.C.M of " << num1 << " and " << num2 << " is: " <<num2;
        else {
            i = 2;
            while (div1 != 0) {
                div1 = (num1*i)%num2;
                if ( div1 == 0)
                    break;
                i++;
            }
            cout << "L.C.M of " << num1 << " and " << num2 << " is: " << num1*i;
        }
    }
    else if (num1 == num2)
        cout <<  "L.C.M of " << num1 << " and " << num2 << " is: " << num2;
}
