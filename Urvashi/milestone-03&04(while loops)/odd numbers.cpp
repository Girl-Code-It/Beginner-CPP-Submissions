#include <iostream>
using namespace std;
int main()
{
    int num = 1;
    while (num <= 100)
    {
        if ((num % 2) != 0)
            cout << num << endl;
        num++;
    }
}
