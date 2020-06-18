#include<iostream>
#include <iomanip> 
using namespace std;

int main() {
    
    int a;
    long b;
    char c;
    float d;
    double e;
    cin >> a >> b >> c >> d >> e;
    cout<< a << '\n' << b << '\n' << c << '\n';
    cout << std::fixed << std::setprecision(3) << d << '\n';
    cout << std::fixed << std::setprecision(9) << e << '\n';
    
    return 0;
}