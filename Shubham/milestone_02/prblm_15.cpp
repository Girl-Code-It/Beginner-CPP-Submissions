#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    //program to print all even numbers from 1 to 100

    int i=1;

    while(i <= 100)
    {
        if(i%2 == 0)
            cout << i << " ";
        i++;
    }
}

