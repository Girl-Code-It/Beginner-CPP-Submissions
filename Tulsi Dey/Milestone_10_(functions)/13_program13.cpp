/*
Define a function named 'perfect' that determines if parameter number is a perfect number. 
Use this function in a program that determines and prints all the perfect numbers between 1 
and 1000.
[An integer number is said to be "perfect number" if its factors, 
including 1(but not the number itself), sum to the number. E.g., 6 is a perfect number because 
6=1+2+3].
*/
#include <iostream>

using namespace std;

bool perfect(int a)
{
    int sum = 0;

    for(int i = 1; i < a; i++)
    if(a%i == 0)
    sum += i;

    if(sum == a) return true;
    return false;
}
int main()
{
    cout<<"Perfect numbers from 1 to 1000\n";
    for(int i = 1; i <= 1000; i++)
    {
        if(perfect(i))
        cout<<i<<" ";
    }

    return 0;
}