#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n, first_digit, last_digit, reverse=0, rem;

    cout << "Enter any number : ";
    cin >> n;

    last_digit = n%10;
    
    while(n != 0){
        rem = n%10;
        reverse = reverse*10 + rem;
         n=n/10;
    }
    first_digit = reverse%10;
    cout << " The first digit is : "<< first_digit;
    cout << "\nThe last digit is : "<< last_digit;
    return 0;
}