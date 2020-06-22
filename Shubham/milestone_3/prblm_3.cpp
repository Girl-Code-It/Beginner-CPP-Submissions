#include<iostream>
#include<cstdio>
#include<math.h>

using namespace std;

int main()
{
    //program to swap first and last digit

    int num, swappedNum;
    int firstDigit, lastDigit, digits=0;

    cout << "Enter a number to swap it's first and last digits" <<endl;
    cin >> num;
    int temp = num;
    lastDigit = num%10;
    while(temp > 10)
    {
        temp /= 10;
        digits++;
    }
    firstDigit = temp;

    swappedNum = lastDigit* pow(10, digits);
    swappedNum += num % (int)(pow(10, digits));
    swappedNum -= lastDigit;
    swappedNum += firstDigit;

    cout << "Original Number = " << num;
    cout << endl << "Swapped Number = " << swappedNum;

}

