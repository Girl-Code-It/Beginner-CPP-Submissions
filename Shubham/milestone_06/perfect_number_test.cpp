#include<iostream>
#include<cstdio>


using namespace std;

int main()
{
    //program to check if the input number is perfect or not

    int num, sum=0, temp, i;

    cout << "Enter a number to check Perfect" << endl;
    cin >> num;
    temp = num;

    for(i=1; i<temp; i++)
    {
        if(temp%i == 0)
            sum += i;
    }
    if(sum == num)
        cout << "It's a perfect number";
    else
        cout << "It's not a perfect number";

}

