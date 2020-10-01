#include <iostream>
#include <cstring>
using namespace std;
inline void check(string a, int times)
{
    int num = 0, index = 0, flag;
    string temp, div[4];
    for(int j  = 0; j < a.size(); j++)
    {
        if(j == 0)
        {
            div[index] = "";
            for(int t_ = 0; t_ < times; t_++)
            {
                div[index] += a[j];
                j++;
            }
            j--;
            index++;
            num++;
        }
        else
        {
            temp = "";
            div[index] = temp + a[j];
label:
            flag = 1;
            for (int index_ = 0; index_ < index; index_++)
            {
                if (div[index] == div[index_] )
                {
                    flag = 0;
                    if (j > a.size()-2)
                    {
                        check(a, times+1);
                        break;
                    }
                    div[index] += a[++j];
                    goto label;
                }
            }
            if (flag == 0)
                break;
            num++;
            index++;
            if (num == 4)
            {
                cout << "YES\n";
                break;
            }
        }
    }
    if(num != 4 && flag != 0)
        cout << "NO\n";
}
int main ()
{
    int t, times = 1;
    cin >> t;
    for (int i = 0; i < t+1; i++)
    {
        string a;
        getline(cin, a);
        if(i > 0)
            check(a, times);
    }
}
