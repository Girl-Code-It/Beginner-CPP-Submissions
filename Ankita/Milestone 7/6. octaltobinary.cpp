#include <iostream>
using namespace std;
int main ()
{
    long int octal, binary, refer[] = {0, 1, 10, 11, 100, 101, 110, 111}, k;
    cout << "Enter any octal number: ";
    cin >> octal;
    int place = 1;
    binary = 0;
    int tempoctal = octal;
    while (tempoctal > 0)
    {
        k = tempoctal % 10;
        binary = refer[k]*place + binary;
        place *= 1000;
        tempoctal /= 10;
    }
    cout << "Binary number = " << binary;
}
