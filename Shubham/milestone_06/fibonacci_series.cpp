#include<iostream>
#include<cstdio>


using namespace std;

int main()
{
    int n, a=0, b=1, c=0, i;

    cout << "Print fibonacci series upto : ";
    cin >> n;

    for(i=1; i<=n; i++)
    {
        a = b;
        b = c;
        c = a+b;

        cout << c << " ";
    }
}

