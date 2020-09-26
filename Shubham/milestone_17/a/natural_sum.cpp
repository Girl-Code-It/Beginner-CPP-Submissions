#include<iostream>
//Q. print the sum of n natural numbers using recursion
using namespace std;

int sum(int n)
{
        if(n==1)
                return 1;

        return n + sum(n-1);
}       
int main()
{
        int n;
        cin >> n;

        cout << sum(n) << endl;
}
