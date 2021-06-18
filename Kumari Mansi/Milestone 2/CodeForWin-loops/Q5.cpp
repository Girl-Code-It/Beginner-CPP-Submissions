/*Write a program to print all odd number between 1 to 100.*/
#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    while (i != 101)
    {
        cout << i << " ";
        i = i + 2;
    }
}