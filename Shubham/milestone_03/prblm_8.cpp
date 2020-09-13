#include<iostream>
#include<cstdio>
#include<math.h>

using namespace std;

int main()
{
   //program to count freq of each digit in a number
    long long int num;
    int lastDigit, freq[10] = {0};

    cout<< "Enter a number ";
    cin >> num;


    for(int i=0; num!=0; i++)
    {
        lastDigit = num%10;
        freq[lastDigit]++;
        num/=10;
    }

    for(int i=0; i<10; i++)
    {
        if(freq[i] != 0)
            cout << "Frequency of " << i << " = " << freq[i] << endl;
    }

}

