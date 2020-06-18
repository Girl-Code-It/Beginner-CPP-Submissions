/*A 4 digit number is entered through keyboard. Write a program to print a new number with digits reversed as of orignal one. E.g.-
INPUT : 1234        OUTPUT : 4321
INPUT : 5982        OUTPUT : 2895*/

#include <iostream>
using namespace std;

int main()
{
    int n, reversedNumber = 0, remainder;

    cout << "Enter an integer: ";
    cin >> n;

    while(n != 0)
    {
        remainder = n%10;
        reversedNumber = reversedNumber*10 + remainder;
        n = n/10;
    }

    cout << "Reversed Number = " << reversedNumber;

    return 0;
}

