#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    //program to find sum of all natural numbers etween 1 to n
    int n;
    cout << "Sum of natural numbers upto : ";
    cin >> n;

    int sum = 0;

    for(int i=1; i <= n; i++)
    {
        sum += i;
    }

    cout << "Sum to natural numbers upto " << n << " is " << sum;


}

