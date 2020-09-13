#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    //program to find sum of all even numbers between 1 to n
    int n;
    cout << "Sum of all even numbers upto : ";
    cin >> n;

    int sum = 0;

    for(int i=1; i <= n; i++)
    {
        if(i%2 == 0)
            sum += i;
    }

    cout << "Sum to natural numbers upto " << n << " is " << sum;


}

