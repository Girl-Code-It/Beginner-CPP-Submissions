#include <iostream>
using namespace std;

int fibonacci_term(int x)
{
    if (x == 0)
        return 0;
    else if (x == 1)
        return 1;
    else
        return fibonacci_term(x - 1) + fibonacci_term(x - 2);
}

int main()
{
    int n;
    cout << "Enter any no : ";
    cin >> n;

    cout << "The value of fibonacci series at " << n << "th place is " << fibonacci_term(n);
}
