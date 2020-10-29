#include<cstdlib>
#include<iostream>

using namespace std;

int isStrong(int);
int factorial(int);

int main()
{

    //program to print all strong numbers between a given interval

    int start, i, end;

    cout << "Enter the lower and upper limit " <<endl;
    cin >> start >> end;

    for(i=start; i<=end; i++)
    {
        if(isStrong(i) == 1)
            cout << i << "  ";
    }

}

int isStrong(int num)
{
    int lastDigit, sum=0, temp;

    temp = num;

    while(temp > 0)
    {
        lastDigit = temp%10;
        sum += factorial(lastDigit);
        temp /= 10;
    }

    if(sum == num)
        return 1;
    else
        return 0;

}

int factorial(int num)
{
    int i, fact=1;
    for(i=1; i<=num; i++)
    {
        fact *= i;
    }
    return fact;
}
