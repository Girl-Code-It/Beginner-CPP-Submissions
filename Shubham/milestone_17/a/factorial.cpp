#include<iostream>

using namespace std;

int F(int n)
{
        if(n == 1)
                return 1;

        return(n*F(n-1));
}

int main()
{
        int n;
        cin >> n;

        int factorial = F(n);

        cout << factorial << endl;
}
