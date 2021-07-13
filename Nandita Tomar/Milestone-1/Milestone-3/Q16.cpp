#include <iostream>
using namespace std;
int main(){
    int n, rem, reverse=0;
    cout << "Enetr the number to be reversed : ";
    cin >> n;
    while(n!=0){
        rem= n%10;
        reverse= reverse*10 + rem;
        n= n/10;
    }
    cout << "The reversed number is : "<< reverse;
    return 0;
}