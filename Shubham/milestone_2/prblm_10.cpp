#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int x = 2, y = 5, z = 0;

    cout << (x==2) << endl;   // must be true;

    cout << (x!=5) << endl;   // must be true

    cout << (x!=5 && y >= 5) << endl;  // must be true;

    cout << (z!=0 || x ==2) << endl; // must be true;

    cout << !(y<10) << endl; //must be false;
}

