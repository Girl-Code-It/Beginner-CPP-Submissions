#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    //program to print all natural numbers from n to 1;

    int n;
    cout << "Enter the numbers you want to print" << endl;
    cin >> n;

    for(; n > 0; n--)
        cout << n << " ";
}

