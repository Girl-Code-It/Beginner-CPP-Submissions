#include <iostream>
using namespace std;
int main(){
    int n, rem, reverse=0, first_digit, last_digit, sum;
    cout << "Enter a number : ";
    cin >> n;
    last_digit = n%10;
    while(n !=0 ){
        rem = n%10;
        reverse = reverse*10 + rem;
        n= n/10;
    }
    first_digit = reverse%10;
    sum = first_digit + last_digit ;
    cout << "Sum of first and alst digit is : "<< sum;
    return 0;
}