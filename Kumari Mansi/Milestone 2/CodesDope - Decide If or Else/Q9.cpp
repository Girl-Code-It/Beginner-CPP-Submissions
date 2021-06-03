/* Modify the above question i.e Q8 to allow student to sit if he/she has medical cause.
 Ask user if he/she has medical cause or not ( 'Y' or 'N' ) and print accordingly.*/
#include <iostream>
using namespace std;
int main()
{
    float tc, ac;
    char ch;
    float p, m = 0;
    cin >> tc >> ac;
    cout << "medical cause=";
    cin >> ch;
    if (ch == 'y' || ch == 'Y')
        p = m;
    else
        p = (ac / tc) * 100;
    if (p == m)
        cout << " Student is allowed to sit in exam";
    else if (p < 75)
        cout << " Student is not allowed to sit in exam";
    else
        cout << "allowed";
    return 0;
}