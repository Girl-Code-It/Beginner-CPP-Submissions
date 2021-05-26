/*Write a  program to print all natural numbers from 1 to n. - using while loop*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i < n + 1)
    {
        cout << i << " ";
        i++;
    }
    return 0;
}