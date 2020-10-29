#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter two numbers" << endl;
    cin >> num1 >> num2
    ;

    if(num1 > num2)
        cout << "The maximum of these two is " << num1;
    else
        cout << "The maximum of these two is " << num2;
}

