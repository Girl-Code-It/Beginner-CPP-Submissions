#include <iostream>
using namespace std;
int main(){
    int n, n1, n2, n3, n4, r;
    cout << "Enter a four digit number : ";
    cin >> n;

    n1 = n % 10;
    n2 = (n/10)%10;
    n3 = (n/100)%10;
    n4 = (n/1000)%10;

    r = (n1*1000) + (n2*100) + (n3*10) + n4 ;
    cout << "The reversed number is : "<< r;

    return 0;
}
