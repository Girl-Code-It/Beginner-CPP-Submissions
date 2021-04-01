#include <iostream>
using namespace std;
int main(){
    int a;
    cout<< "Enter the number :";
    cin >> a;
    if(a>0)
        cout << a << " is positive";
    else if(a==0)
        cout << a << " is zero";
    else
        cout << a << " is negative";
    return 0;
}