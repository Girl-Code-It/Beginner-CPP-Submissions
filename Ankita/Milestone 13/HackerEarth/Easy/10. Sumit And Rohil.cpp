#include <iostream>
#include <cstring>
using namespace std;
int check(string a, string b, int n)
{
    for(int i = 0; i < n; i++)
    {
        int flag = 0;
        for(int j = 0; j < b.size(); j++)
        {
            if(a[i] == b[j])
            {
                flag = 1;
                b.erase(b.begin() + j);
                break;
            }
        }
        if (flag == 0)
            return 0;
    }
    return 1;
}
int main ()
{
	int n, index1 = -1, len[100], num =0;
	cin >> n;
	string temp, names[n], grp[n];
	getline(cin, temp);
	for (int i = 0; i < n; i++)
	{
		getline (cin, names[i]);
		grp[i] += names[i][0];
		grp[i] += names[i][names[i].size()-1];
		len[i] = names[i].size();
	}
	for(int i = 0; i < n; i++)
	{
	    int flag = 0;
        for(int j = i+1; j < n; j++)
        {
            if(grp[i] == grp[j] && len[i] == len[j] && names[i][names[i].size()-1] != '*' && names[j][names[j].size()-1] != '*')
            {
                int res = check(names[i], names[j], len[i]);
                if (res == 1)
                {
                    cout << i << "***";
                    names[j] += "*";
                    flag = 1;
                }
            }
        }
        if (flag == 1)
        {
            num++;
            names[i] += "*";
        }
	}
	for (int i = 0; i < n; i++)
    {
        if(names[i][names[i].size()-1] != '*')
            num++;
    }
    cout << num;
}
