#include <iostream>
using namespace std;
int main(){
    int n, output;
    cout << "Enter the number here : ";
    cin >> n;
    if(n>0)
        cout << "\nthe absolute value is : "<< n;
    else
        cout << "\nthe absolute value is : "<< -n;
    return 0;        
}