#include<cstdlib>
#include<iostream>

using namespace std;

int isPrime(int);

int main()
{

    //program to print all prime numbers in a given interval

    int start, end, i;
    cout << "Enter the lower and upper limit of interval" << endl;
    cin >> start >> end;

    for(i=start; i<=end; i++)
    {
        if(isPrime(i) == 1)
            cout << i << "  ";
    }

   

}

int isPrime(int x)
{
    int flag=0, i;

    for(i=2; i<x; i++)
    {
        if(x%i == 0)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
        return 0;
    else
        return 1;
}




