#include<iostream>
#include<cstdio>


using namespace std;

int main()
{
    //program to check if a number is armstrong or not

    int num, temp, lastDigit, sum=0, cube;
    bool isArmstrong;

    cout << "Enter a number to perform armstrong test" <<endl;
    cin >> num;

    temp = num;

    while(temp != 0)
    {
        lastDigit = temp%10;
        cube = lastDigit * lastDigit * lastDigit;
        sum = sum + cube;
        temp /= 10;
    }
    if(num == sum)
        cout << "Number is armstrong" << endl;
    else
        cout << "Number is not armstrong" << endl;
}

