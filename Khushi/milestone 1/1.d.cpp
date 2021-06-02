#include<iostream>
using namespace std;
int main ()
{
    int num;
    cout << "Enter the number to be checked : ";
    cin >> num;
    if (num >= 0)
        cout << num << " is a positive number.";
    else 
        cout << num << " is a negative number.";
    return 0;
}
