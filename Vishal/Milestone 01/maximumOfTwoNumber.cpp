#include <iostream>
using namespace std;

int main(){

    int a, b;
    cout << "Enter Two Number";
    cin >> a >> b;

    int ans = (a < b) ? b : a;
    cout << ans << '\n';
    return 0;
}