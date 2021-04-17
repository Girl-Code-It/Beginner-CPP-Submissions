#include <iostream>
using namespace std;
int main(){
    int a, b;
    cout<<"Enter the two numbers ";
    cin >> a >> b;
    if(a>b)
        cout << a << " is maximum among the two values";
    else
        cout << b << " is minimum among the two values";
    return 0;
}

