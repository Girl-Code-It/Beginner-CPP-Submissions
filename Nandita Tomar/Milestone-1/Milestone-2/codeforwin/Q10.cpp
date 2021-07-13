#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter any number : ";
    cin >> n;
    int count = 0;
    while(n !=0){
        n = n/10;
        count++;
    }
    cout << "The number of digits is : "<< count;
    return 0;
}