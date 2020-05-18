/*
A 4 digit number is entered through keyboard.
Write a program to print a new number with
digits reversed as of orignal one.
E.g.-
INPUT : 1234        OUTPUT : 4321
INPUT : 5982        OUTPUT : 2895
*/
#include<iostream>
using namespace std;
int main()
{
   int x;
   cout<<"please enter the number ( 4-digit number) : ";
   cin>> x;
    int digit1 = x%10;
    int digit2 = (x/10)%10;
    int digit3 = (x/100)%10;
    int digit4 = (x/1000)%10;
    int new_number = (digit1*1000)+(digit2*100)+(digit3*10)+(digit4*1);
   cout<<"output is : "<<new_number<<endl;
   return 0;
}
