#include<iostream>

using namespace std;

void hailstone(int n)
{
        if(n==1)
                return;

        else
        {
                if(n%2 ==0)
                        n/=2;
                else
                        n = n*3 +1;
        }
        cout << n << " ";
        hailstone(n);
        
}

int main()
{
        int n;
        cin >> n;

        hailstone(n);
}
