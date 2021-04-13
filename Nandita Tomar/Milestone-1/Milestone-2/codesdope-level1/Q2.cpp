#include <iostream>
using namespace std;
int main(){
    int n1, n2;
    cout << "Enter any two integers" << endl;
    cin >> n1 >> n2 ;
    if (n1>n2)
        cout << n1 << " is greatest among the two numbers";
    else 
        cout << n2 << " is greatest among two numbers";
    return 0;    
}