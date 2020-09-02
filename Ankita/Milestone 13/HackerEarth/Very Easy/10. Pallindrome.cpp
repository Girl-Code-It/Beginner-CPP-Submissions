#include<iostream>
#include <cstring>
using namespace std;
int main ()
{
    int n;
    cin >> n;
    for (int i = 0; i < n+1; i++)
    {
        int flag = 1;
        string a;
        getline (cin, a);
        if(i > 0)
        {
            int k = a.size()-1;
            for (int j = 0; j < a.size(); j++)
            {
                if(a[j] != a[k])
                {
                    flag = 0;
                    cout << "NO\n";
                    break;
                }
                k--;
            }
            if( flag == 1)
                cout << "YES\n";
        }
    }
}
