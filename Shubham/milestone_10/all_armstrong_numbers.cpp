#include<cstdlib>
#include<iostream>

using namespace std;

int isArmstrong(int);

int main()
{

    //program to print all armstrong numbers between a given interval

    int start, i, end;

    cout << "Enter the lower and upper limit " <<endl;
    cin >> start >> end;

    for(i=start; i<=end; i++)
    {
        if(isArmstrong(i) == 1)
            cout << i << "  ";
    }

}

int isArmstrong(int num)
{
    int temp, lastDigit, sum=0;
    temp = num;

    while(temp >0)
    {
        lastDigit = temp%10;
        sum += lastDigit*lastDigit*lastDigit;
        temp /= 10;
    }

    if(sum == num)
        return 1;
    else
        return 0;
}
