#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int num;
    cout << "Enter a number to check even/odd" << endl;
    cin >> num;

    if(num%2 == 0)
        cout << "It's an even Number";
    else
        cout << "It's an odd Number";
}

