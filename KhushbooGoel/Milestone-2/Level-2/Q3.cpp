#include<iostream>
using namespace std;
int main()
{
    int num , d1 , d2 , d3 , d4;
    cout << "Enter 4-digit number: ";
    cin >> num;
    d1 = num % 10;
    d2 = (num / 10) % 10;
    d3 = (num / 100) % 10;
    d4 = num /1000;
    cout << "Reverse number: " << d1 << d2 << d3 << d4;





    return 0;
}
