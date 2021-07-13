#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n, rem, reverse =0, first_digit, last_digit;
    cout << "Enter number : ";
    cin >> n;
    last_digit = n%10;
    int s, count =0;
    s= n;
    while(s !=0 ){
        rem = s%10;
        reverse = reverse*10 + rem;
        s = s/10;
        count++;
    }
    s = n;
    first_digit = reverse%10;
    int swap;

    swap = (s/10)*10 + first_digit;
    int d= pow(10, count-1);
    swap = (swap % d) + (pow(10, count-1)*last_digit);
    cout << "The number with first and last digit swapped is : "<< swap;
    return 0;
}
