#include <iostream>
using namespace std;
int main(){
    int n, product=1;
    cout << "Enter the number : ";
    cin >> n;
    while(n!=0){
        product *= n%10;
        n= n/10;
    }
    cout << "The product of the digits of the number is : "<< product;
    return 0;
}