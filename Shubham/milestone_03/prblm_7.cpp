#include<iostream>
#include<cstdio>
#include<math.h>

using namespace std;

int main()
{
   //program to check if the number is pallindrom or not

   int num, lastDigit, rev = 0;

   cout << "Enter any number to check pallindrom" << endl;
   cin >> num;
    int temp = num;
   while(num != 0)
   {
        lastDigit = num % 10;
        rev = (rev * 10) + lastDigit;
        num /= 10;
   }
    if(temp == rev)
        cout << "It's a pallindrom number" <<endl;
    else
        cout << "It's not a pallindrom number" << endl;

}

