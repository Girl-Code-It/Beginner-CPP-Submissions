#include<iostream>
#include<cstdio>


using namespace std;

int main()
{
    //program to print all perfect numbers between 1 to n;
    int n, sum, temp, i, j;

    cout << "Print all perfect numbers upto : ";
    cin >> n;

    for(i=1; i<=n; i++)
    {
        sum=0;
        temp = i;
        for(j=1; j<i; j++)
        {
            if(i%j == 0)
                sum += j;
        }
        if(sum == temp)
            cout << i << "  ";
    }

}

