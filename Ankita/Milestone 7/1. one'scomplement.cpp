#include <iostream>
#define SZ 8
using namespace std;
int main () {
    char binary[SZ + 1], OnesComp[SZ + 1];
    int i, error = 0;
    cout << "Input a " << SZ << " bit binary value: \n";
    cin >> binary;
    for (i = 0; i < SZ; i++)
    {
        if (binary[i] == '1')
            OnesComp[i] = '0';
            else if (binary[i] == '0')
            OnesComp[i] = '1';
            else
        {
            cout << "Invalid input." << endl;
            error = 1;
            break;
        }
    }
    OnesComp[SZ] = '\0' ;
    if (error == 0)
    {
        cout << "Ones complement of " << binary << " is = " << OnesComp;
    }
}
