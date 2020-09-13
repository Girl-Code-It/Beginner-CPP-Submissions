#include <iostream>
#include <cstring>
using namespace std;
int main ()
{
    int t, i, j, k, flag, trow;
    cin >> t;
    for (i = 0; i < t; i++)
    {
        int m,n;
        cin >> n >> m;
        string a[n+1], test[n];
        for (j = 0; j < n+1; j++)
            getline(cin, a[j]);
        for (j = 0; j < m; j++)
        {
            flag = 1;
            trow = 0;
            for(k = 1; k < n+1; k++)
            {
                string temp = a[k];
                temp.erase(temp.begin() + j);
               // cout << "temp = " << temp << "\n";
                if(k>1)
                {
                    for(int l = 0; l < trow; l++)
                    if (test[l] == temp)
                    {
                        //cout << "in\n";
                        flag = 0;
                        break;
                    }
                }
                if (flag == 0)
                    break;
                test[trow] = temp;
                //cout << "test[trow] = " << test[trow];
                trow++;
            }
            if (flag == 1)
            {
                cout << "Yes\n";
                break;
            }
        }
        if (flag == 0)
            cout << "No\n";
    }
}
