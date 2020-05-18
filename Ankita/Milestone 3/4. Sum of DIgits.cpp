#include<iostream>
using namespace std;
int main () {
    int a, t, k;
    cout << "Enter a number" << endl;
    cin >>a;
    k = 0;
    while (a>0) {
        t = a%10;
        k = t+k;
        a = a/10;

    }
    cout <<k ;
}
