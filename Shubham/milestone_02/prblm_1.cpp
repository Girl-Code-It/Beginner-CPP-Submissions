#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int length, breadth;
    bool isSquare;

    cout << "Enter the length of rectangle" << endl;
    cin >> length;

    cout << "Enter the breadth of rectangle" << endl;
    cin >> breadth;

    isSquare = (length == breadth)? true : false;

    (isSquare == true) ? cout << "It's a square" : cout << "It's not a square";


}

