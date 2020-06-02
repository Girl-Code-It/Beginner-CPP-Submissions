//Write a program to check whether a number is negative, zero, positive

#include <iostream>
using namespace std;

int main()
{
    int num;

    cout<< "please enter the number :";
    cin >> num;

    if (num > 0)
        cout << "the number is positive integer" << endl;
    else if (num < 0)
        cout << "the number is a negative integer" << endl;
    else
        cout << "the number is zero"<<endl;

    return 0;
}
