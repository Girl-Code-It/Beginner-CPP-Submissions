#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    //program to find multiplication table of any number

    int n;

    cout << "Which number of table you want ?";
    cin >> n;

    for(int i=1; i <= 10; i++)
    {
        cout << n << " * " << i << " = " << n*i << endl;
    }


}

