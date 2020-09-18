#include<iostream>
#include<cstdio>


using namespace std;

int main()
{
    //program to print all strong number between 1 to n

    int n, lastDigit, sum, temp, i, j, fact;

    cout << "Print all Strong numbers upto : ";
    cin  >> n;

    for(i=1; i<=n; i++)
    {
        sum = 0, temp = i;

        while(temp != 0)
        {
            lastDigit = temp%10;
            fact = 1;
            for(j=1; j<=lastDigit; j++)
                fact = fact*j;
            sum += fact;
            temp /= 10;
        }

        if(i == sum)
            cout << i << "  ";

    }
}

