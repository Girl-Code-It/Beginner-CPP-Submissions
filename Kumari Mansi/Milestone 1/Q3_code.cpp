
/* Q3: Write a program to check whether a number is even or odd   */
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num % 2 == 0)
    {
        cout << "\n It's an even number.";
    }
    else
    {
        cout << "\n It's an odd number";
    }
    return 0;
}