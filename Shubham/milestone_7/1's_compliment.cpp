#include<iostream>
#include<cstdio>
#include<string.h>
#define SIZE 100

using namespace std;

int main()
{
    //find one's compliment

    char num[SIZE], result[SIZE];
    int i, j;

    cout << "Enter the binary number to get one's compliment" << endl;
    cin >> num;
    for(i=0; num[i] != NULL; i++)
    {
        if(num[i] == '0')
            result[i] = '1';

        else if(num[i] == '1')
            result[i] = '0';
    }
    cout << result;

}

