#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string a[n+1];
    for (int i = 0; i < n+1; i++)
    {
        getline(cin, a[i]);
    }
    for (int i = 1; i < n+1; i++)
    {
        int flag = 1;
        int k = a[i].size()-1;
        for (int j = 0; j < a[i].size(); j++)
        {
            if (a[i][j] != a[i][k])
            {
                cout << "NO\n";
                flag = 0;
                break;
            }
            k--;
        }
        if (flag == 1)
            cout << "YES\n";
    }
}
