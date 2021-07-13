#include <iostream>
using namespace std;
int main(){
    int n, sum =0;
    cout << "Enter the number : ";
    cin >> n;
    while (n !=0){
        sum += n%10;
        n = n/10;
    }
    cout << "The sum of digits is : "<< sum;
    return 0;
}