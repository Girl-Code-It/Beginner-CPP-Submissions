#include <iostream>
using namespace std;
int main(){
    int sum=0, i=0, n;
    cout << "Enter the limit n : ";
    cin >> n;
    while(i<=n){
        if(i%2 != 0){
            sum+=i;
        }
        i++;
    }
    cout << "The sum of odd natural numbers in the range - 1 to n is : "<< sum;
    return 0;
}