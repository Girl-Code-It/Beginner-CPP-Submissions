#include <iostream>
using namespace std;
inline void prime (int n, int num )
{
    int m ;
    if (num%n == 0)
    {
        for (int k = 2; k<n; k++)
        {
            if (n%k == 0)
            {
                m = 1;
                break;
            }
            else
                m = 0;
        }
        if (m == 0 || n == 2)
        {
            cout << n;
            cout << "\n";
        }
    }

}
int main ()
{
    int num, n, prime_fact;
    cout << "Enter any number: ";
    cin >> num;
    cout << "prime factors of " << num << " are :\n";
    for (int n = 2; n < num; n++)
    {
        prime (n, num);
    }
}
