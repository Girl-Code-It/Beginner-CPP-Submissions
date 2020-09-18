#include<iostream>
#include<cstdio>
#include<math.h>

using namespace std;

int main()
{
   //program to print any number in words

   int num, lastDigit, rev=0;
   cout << "Enter any number" << endl;
   cin >> num;

   while(num > 0)
   {
        lastDigit = num%10;
        rev = (rev*10) + lastDigit;
        num /= 10;
   }

   while(rev != 0)
   {
        lastDigit = rev % 10;

        switch(lastDigit)
        {
            case 0: cout << "Zero   "; break;
            case 1: cout << "One    "; break;
            case 2: cout << "Two    "; break;
            case 3: cout << "Three  "; break;
            case 4: cout << "Four   "; break;
            case 5: cout << "Five   "; break;
            case 6: cout << "Six    "; break;
            case 7: cout << "Seven  "; break;
            case 8: cout << "Eight  "; break;
            case 9: cout << "Nine   "; break;
        }
        rev /= 10;
   }



}

