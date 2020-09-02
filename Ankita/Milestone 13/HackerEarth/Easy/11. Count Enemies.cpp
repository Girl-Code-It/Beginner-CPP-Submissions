#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int t, num;
    cin >> t;
    string temp, a;
    getline (cin, temp);
    for(int i = 0; i < t; i++)
    {
        getline (cin, a);
        num = 0;
        for(int j = 0; j < a.size(); j++)
        {
            if(a[j] == 'X')
            {
                for(int k = j+1; a[k] != '*'; k++)
                    a[k] = 'X'; //a.erase(a.begin() + k);
                for(int k = j-1; a[k] != '*' && k > -1; k--)
                    a[k] = 'X'; //a.erase(a.begin() + k);
            }

        }
        for(int j = 0; j < a.size(); j++)
        {
            if(a[j] == 'O')
                num++;
        }
        cout << num << "\n";
    }
}
