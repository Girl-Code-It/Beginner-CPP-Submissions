#include <iostream>
using namespace std;
int main(){
    float salary, years, netAmount;
    cout << "Enter your salary and the number of years of service : ";
    cin >> salary >> years;
    if (years>5)
        netAmount = salary * 1.05;
    else 
        netAmount = salary;
    cout << "\n net bonus amount is " << netAmount;
    return 0;        
}