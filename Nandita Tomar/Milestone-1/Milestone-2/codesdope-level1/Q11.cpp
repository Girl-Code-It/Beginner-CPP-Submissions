#include <iostream>
using namespace std;
int main(){
    char x;
    cout << "Enter the character : ";
    cin >> x;
    if(x>='a' && x<='z')
        cout << x << " is lowercase";
    else if(x>='A' && x<='Z')
        cout << x << " is uppercase";
    return 0;        
}