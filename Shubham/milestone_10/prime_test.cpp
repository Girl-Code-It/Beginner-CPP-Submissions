#include<cstdlib>
#include<iostream>

using namespace std;

bool isPrime(int);

int main()
{
    int num;

    cout << "Enter a number to check prime" << endl;
    cin >> num;

    if(isPrime(num) == true)  cout << "It's a prime Number" << endl;
    else    cout << "It's not a prime number" << endl; 
}

bool isPrime(int num)
{
    int i, flag =0;
    for(i=2; i<num; i++)
    {
        if(num%i == 0)
        {
            flag = 1;
            break;
        } 
    }

    if(flag == 1) 
        return false;
    else
        return true;
}
