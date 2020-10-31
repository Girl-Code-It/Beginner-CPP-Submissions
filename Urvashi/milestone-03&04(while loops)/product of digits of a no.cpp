#include <iostream>
using namespace std;
int main()
{
    int num, mul = 1;
    cout << "enter the number";
    cin >> num;
    while (num != 0)
    {
        mul *= num % 10;
        num = num / 10;
    }
    cout << "product of digits of the number is :" << mul << endl;
}
