/* Write a program to print absolute value of a number entered by user. E.g.-
INPUT: 1        OUTPUT: 1
INPUT: -1        OUTPUT: 1 */
#include<iostream>
using namespace std;

int main()
 {
     int num;
     cin>>num;
     if(num<0)
        cout<<"The absolute value of no. entered is: "<<-1*num;
     else
        cout<<"The absolute value of no. entered is: "<<num;
 }
