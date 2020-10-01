#include<iostream>
#include<cstdio>
#include<math.h>

using namespace std;

int main()
{
    //program to print all prime numbers between 1 to n;

    int n;
    bool isPrime;
    int num, j;
    cout << "Print all prime numbers betweens 1 and : " <<  endl;
    cin >> n;

    for(num=2; num<=n; num++)
    {
        isPrime = true;
        for(j=2; j<num; j++)
        {
                if(num%j == 0)
                {
                    isPrime = false;
                    break;
                }
        }
        if(isPrime == true)
            cout << num << "    ";
    }

}

