/* 
Write a program to print absolute vlaue of a number entered by user. E.g.-
INPUT: 1        OUTPUT: 1
INPUT: -1        OUTPUT: 1 */
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cout << (n * (-1)); // or we can use abs(n) function too

    return 0;
}