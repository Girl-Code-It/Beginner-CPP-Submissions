#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    if(n & 1)
        cout << n << "is odd number";
    else
        cout << n << "is even number";
        
    return 0;
}