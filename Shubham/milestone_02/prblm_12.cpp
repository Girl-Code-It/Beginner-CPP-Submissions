#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    //program to print all natural numbers from 1 to n;

    int n;
    cout << "Enter the numbers you want to print" << endl;
    cin >> n;

    for(int i=1; i<=n; i++)
        cout << i << " ";
}

