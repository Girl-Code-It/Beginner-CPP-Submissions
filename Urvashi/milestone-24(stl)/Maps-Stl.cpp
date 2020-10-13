#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int q, type, marks;
    string name;

    cin >> q;
    map<string, int> m;

    while (q--)
    {
        cin >> type >> name;
        if (type == 1)
        {
            cin >> marks;
            m[name] += marks;
        }

        else if (type == 2)
            m.erase(name);

        else
            cout << m[name] << endl;
    }

    return 0;
}
