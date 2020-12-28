#include<iostream>
using namespace std;
int main()
{
    int l ,b ;
    cout << "Enter length and breadth of rectangle: ";
    cin >> l >> b;
    l==b ? cout << "It is a square." : cout << "It is a rectangle." ;

    return 0;
}
