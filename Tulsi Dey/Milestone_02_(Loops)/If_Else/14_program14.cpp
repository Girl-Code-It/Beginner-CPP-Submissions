/*

A 4 digit number is entered through keyboard. 
Write a program to print a new number with digits reversed 
as of orignal one. 
E.g.-
INPUT : 1234        OUTPUT : 4321
INPUT : 5982        OUTPUT : 2895

*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the 4 digit number: "; cin>>n;

    int result, copy = n;
    
    while(n != 0)
    {
        result = result*10 + n%10;
        n /= 10;
    }

    cout<<"INPUT: "<<copy<<"\t"<<"OUTPUT: "<<result;
    return 0;
}