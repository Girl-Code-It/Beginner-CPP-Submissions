#include <iostream>
#include <math.h>
using namespace std;
int prime(int num, int n)
{
    int k;
    k = num % n;
    if (n>1)
    {
            if (k == 0)
    {
        return (0);
    }
    else
        return (prime (num, n-1));

    }
    else if (n == 1)
        return (1);

}
void armstrong (int num)
{
    int k = 0, n = num, i, dig, sum = 0;
    while (n>0) {
        n = n/10;
        k++;
    }
    i = num;
    while (i>0) {
        dig = i%10;
        sum = sum + (pow(dig,k)+0.5);
        i = i/10;
    }
    if (sum == num)
        cout << "-->" << num << " is an armstrong number.\n";
    else
        cout << "-->" << num << " is not an armstrong number.\n";
}
void perfect (int num)
{
        int mod, sum = 0;
        for (int i = 1; i<num; i++) {
        mod = num%i;
        if (mod == 0) {
            sum = sum+i;
        }
    }
    if (sum == num)
        cout << "-->" << num << " is  perfect number.";
    else
        cout << "-->" << num << " is not a perfect number.";
}
int main ()
{
    int num, n;
    cout << "Enter any number: ";
    cin >> num;
    n = prime (num, num-1);
    if (n == 1)
    {
        cout << "-->" << num << " is a prime number.\n";
    }
    else
    {
        cout << "-->" << num << " is not a prime number.\n";
    }
    armstrong (num);
    perfect (num);
}
