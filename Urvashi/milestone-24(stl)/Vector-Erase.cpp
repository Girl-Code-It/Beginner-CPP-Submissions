#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, x, y, a, b;
    cin >> n;
    vector<int> v;

    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        v.push_back(x);
    }

    cin >> y;
    v.erase(v.begin() + y - 1);

    cin >> a >> b;
    v.erase(v.begin() - 1 + a, v.begin() + b - 1);

    cout << v.size() << endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}
