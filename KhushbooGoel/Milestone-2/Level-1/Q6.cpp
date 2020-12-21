#include<iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    if(num < 0)
        num = num *(-1);
    else num;
    cout << "Absolute value: " << num;

    return 0;
}
