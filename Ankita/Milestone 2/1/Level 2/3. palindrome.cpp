#include<iostream>
using namespace std;
int main () {
    int p, r, pal = 0;
    cout << "Enter the number" << endl;
    cin >> p;

    while (p > 0) {
        r = p%10;
        pal = pal * 10 + r;
        p = p/10;
    }
    cout << pal;
    return 0;


}
