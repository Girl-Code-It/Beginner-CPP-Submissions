#include <iostream>
#define sz 8
using namespace std;
int main () {
    char binary[sz + 1], onescomp[sz + 1], twoscomp[sz + 1];
    int i, error = 0, carry = 1;
    cout << "Enter a " << sz << " bit binary number: " ;
    cin >> binary;
    for (i = 0; i < sz; i++)
    {
        if (binary[i] == '1')
            onescomp[i] = '0';
        else if (binary[i] == '0')
            onescomp[i] = '1';
        else
        {
            cout << "Invalid input." << endl;;
            error = 1;
            break;
        }
    }
    onescomp[sz] = '\0';
    cout << "ones complement = " << onescomp << endl;
    if (error == 0)
    {
        for (i = sz - 1; i >=0; i--)
        {
            if (onescomp[i] == '0' && carry == 1)
             {
                 twoscomp[i] = '1';
                 carry = 0;
             }
            else if (onescomp[i] == '1' && carry == 1)
             {
                 twoscomp[i] = '0';
             }
            else
              {
                 twoscomp[i] = onescomp[i];
              }
        }
        twoscomp[sz] = '\0';
        cout << "Twos complement = " << twoscomp << endl;
    }
    return 0;
}

