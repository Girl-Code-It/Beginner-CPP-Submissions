#include<iostream>
using namespace std;
int main () {
    int n, count = 0;
    cout << "Enter a number" << endl;
    cin >> n;
    /*while (n > 0) {
        n = n / 10;
        count++;
    }*/
    for (int  i = n; i > 0; i = i / 10) {
        count++;
    }
    cout << count;
    return 0;
}
