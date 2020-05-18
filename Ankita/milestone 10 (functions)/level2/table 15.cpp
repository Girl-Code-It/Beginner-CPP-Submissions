#include <iostream>
using namespace std;
void multi (int n, int table_of = 15)
{
    cout << table_of << " * " << n << " = " << n * table_of;
}
int main ()
{
    for (int n = 1; n <= 10; n++)
    {
        multi(n);
        cout << "\n";
    }
}
