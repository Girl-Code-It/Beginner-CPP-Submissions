#include <iostream>
using namespace std;
int power (int num, int exp, int k)
{
    k = k*num;
    if (exp == 1)
    {
        return (k);
    }
    else
    {
        return(power (num, exp-1, k));
    }
}
int main ()
{
    int num, exp = 3, k = 1, result;
    cout << "Enter base number: ";
    cin >> num;
    result = power (num, exp, k);
    cout << "Cube of "<< num << " is = " <<result;
}
