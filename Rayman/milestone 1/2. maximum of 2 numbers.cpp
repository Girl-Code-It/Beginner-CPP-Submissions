//Write a program to print maximum of two numbers

#include <iostream>
using namespace std;

int main()
{
    int number1, number2;

    cout << "Please enter the first number : " << endl;
    cin >>number1;

    cout << "please enter the second number :"<< endl;
    cin >>number2;

    if (number1 > number2)
        cout <<"first number is greater than second"<< endl;

    else
        cout <<"second number is greater than first"<< endl;

    return 0;
}
