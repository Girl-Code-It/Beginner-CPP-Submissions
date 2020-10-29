#include<iostream>

using namespace std;

int isPrime(int n)
{
        static int i=n/2;

        if(i<2)
                return 1;

        else if(n%i == 0)
                return 0;
        else
        {
                i--;
                isPrime(n);
        }
}

int main()
{
        int n; 
        cin >> n;

        if(isPrime(n))  cout << "Prime" << endl;
        else    cout << "Not Prime" << endl;
}
