#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q, num = 0, flag, res;
    char check;
    cin >> q;
    string temp, s, t;
    getline(cin, temp);
    for(int i = 0; i < q; i++)
    {
        getline(cin, s);
        getline(cin, t);
        cout << s << t;
        /*if(s.size() == t.size())
        {
            flag = 1;
            for(int j = 0; j < s.size(); j++)
            {
                if(j == 0)
                {
                    if(s[j] > t[j])
                    {
                        num = s[j]-t[j];
                        res = 26- num;
                        check = -;
                    }
                    else if(s[j] < t[j])
                    {
                        num = t[j]-s[j];
                        res = num;
                        check = +;
                    }
                }
                if(check == '-')
                {
                    if(s[j] - num != t[j])
                    {
                        flag = 0;
                        break;
                    }
                }
                if(check == '+')
                {
                    if(s[j] + num != t[j])
                    {
                        flag = 0;
                        break;
                    }
                }
            }
            if(flag == 1)
                cout << res << "\n";
        }*/
    }
}
