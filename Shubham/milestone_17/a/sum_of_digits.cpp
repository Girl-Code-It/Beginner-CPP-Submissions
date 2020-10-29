#include<iostream>

using namespace std;
int total=0;
int sum(int n)
{
        if(n == 0)
                return 1;

        total += n%10;
        sum(n/10);
        return total;
}

int main()
{
        int n;
        cin >> n;

        cout << sum(n) << endl;
}
