#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, flag = 1;
		string s;
		cin >> n >> s;
		for (int i = 0; i < n; i++)
		{
		    if((int(s[i]) >= 65 && int(s[i])<= 90) || (int(s[i]) >= 97 && int(s[i]) <= 122))
			for(int j = 2; j < int(s[i]); j++)
			{
				if(int(s[i])%j == 0)
				{
					flag = 0;
					break;
				}
			}
			else
                flag = 0;
			if(flag == 0)
			{
                    int change = 1;
                    label:
					int temp = int(s[i]), flag1 = 1;
					if(((temp-change) >= 65 && (temp-change<= 90)) || ((temp-change) >= 97 && (temp-change) <= 122))
					for(int k = 2; k < temp-change; k++)
					{
						if((temp-change)%k == 0)
						{
							flag1 = 0;
							break;
						}
					}
					else
                        flag1 = 0;
					if(flag1 == 0)
					{
					    flag1 = 1;
                        if(((temp+change) >= 65 && (temp+change<= 90)) || ((temp+change) >= 97 && (temp+change) <= 122))
						for(int k = 2; k < temp+change; k++)
						{
							if((temp+change)%k == 0)
							{
								flag1 = 0;
								break;
							}
						}
						else
                        {
                            change++;
                            goto label;
                        }
						if(flag1 == 1)
							//s.replace(i, 1, "char(temp+1)");
							s[i] = char(temp+change);
                        else
                        {
                            change++;
                            goto label;
                        }
					}
					else
						//s.replace(i, 1, "char(temp-1)");
						s[i] = char(temp-change);

			}
            flag = 1;
		}
		cout << s << "\n";
	}
}
