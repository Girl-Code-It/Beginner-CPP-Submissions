#include<cstdlib>
#include<iostream>

using namespace std;

int isPrime(int);
int isArmstrong(int);
int isPerfect(int);

int main()
{
    int num;
    cout << "Enter a number to check prime, armstrong, perfect" << endl;
    cin >> num;

    if(isPrime(num) == 1)
        cout << "It's a Prime Number" << endl;
    else
        cout <<"It's not a Prime Number"<< endl;

    if(isArmstrong(num) == 1)
        cout << "It's an Armstrong Number"<< endl;
    else
        cout << "It's not an Armstrong Number"<< endl;

    if(isPerfect(num) == 1) 
        cout << "It's a Perfect Number"<< endl;
    else
        cout << "It's not a Perfect Number"<< endl;

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

int isArmstrong(int x)
{
    int sum =0, temp, lastDigit;
    temp = x;

    while(temp > 0)
    {
        lastDigit = temp%10;
        sum += lastDigit*lastDigit*lastDigit;
        temp /= 10;
    }
    if(sum == x)
        return 1;
    else
        return 0;
}

int isPerfect(int x)
{
    int sum=0;

    for(int i=1; i<x; i++)
    {
        if(x%i == 0)
            sum += i; 
    }

    if(sum == x)    
        return 1;
    else 
        return 0;
}
