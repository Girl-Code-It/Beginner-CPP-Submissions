#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, firstdigit, lastdigit, digits;

    cout << "enter the number " << endl;
    cin >> n;

    int temp = n % 10;
    int count = (int)log10(n);

    n = (n / 10) * 10 + n / pow(10, count);

    n = n % (int)pow(10, count) + temp * pow(10, count);

    cout << "after swapping " << n;
}
