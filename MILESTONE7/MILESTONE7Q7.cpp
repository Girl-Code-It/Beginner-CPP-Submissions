//C++ Program
//Octal to decimal conversion
#include <iostream>
#include <math.h>
using namespace std;
// Function to convert octal number to decimal
int convert(int octal)
{
    int decimal = 0, i = 0;
    //converting octal to decimal
    while (octal != 0)
    {
        int rem = octal % 10;
        octal /= 10;
        int res=rem*pow(8,i);
        decimal += res;
        i++;
    }
    return decimal;
}
//main program
int main()
{
    int octal;
    cout << "Enter an octal number: ";
    //user input
    cin >> octal;
    //calling function
    int decimal=convert(octal);
    //printing output
    cout << octal << " in octal = " << decimal << " in decimal";
    return 0;
}
