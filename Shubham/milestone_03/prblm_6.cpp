#include<iostream>
#include<cstdio>
#include<math.h>

using namespace std;

int main()
{
   //program to find a number's reverse

   int digits=0, num, lastDigit, rev=0, base;
   int i=0;

   cout << "Enter a number to find it's reverse" << endl;
   cin >> num;

    while(num > 0)
    {
        lastDigit = num % 10;
        rev = (rev * 10) + lastDigit;
        num /= 10;

    }


   cout << "Original Number : " << num;
   cout << endl << "Reversed Number : " << rev;
}

