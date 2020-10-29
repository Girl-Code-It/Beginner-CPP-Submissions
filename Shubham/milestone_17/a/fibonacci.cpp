#include<iostream>

using namespace std;

int Fib(int n)
{
        if(n <= 1)
                return n;
        return Fib(n-1) + Fib(n-2);
}

int main()
{
        int n;
        cin >> n;
        cout << "Fibonacci Series upto " << n << "is : " << endl;
        for(int i=0; i<=n; i++)
        {
                cout << Fib(i) << endl;
        }
}
