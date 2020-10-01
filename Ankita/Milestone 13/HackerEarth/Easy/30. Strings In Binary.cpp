#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int t;
	cin >> t;
	for(int i = 0; i < t; i++)
	{
		int num = 0, length, index, flag;
		string s;
		cin >> length >> s;
		//string arr[length*length];
		for(int j = 0; j < s.size()-1; j++)
		{
			if(s[j] != '1')
				continue;
            string arr[length*length];
            index = 0;
			for(int k = j+1; k < s.size(); k++)
			{
			    flag = 1;
				if(s[k] == '1')
				{
					string temp = "";
					for(int m = j; m <= k; m++)
						temp += s[m];
					if(index == 0)
					{
						arr[index] = temp;
						index++;
						num++;
					}
					else
                    {
                        for(int m = 0; m < index; m++)
                        {
                            if(arr[m] == temp)
                            {
                                flag = 0;
                                break;
                            }
                        }
                        if(flag == 1)
                        {
                            arr[index] = temp;
                            index++;
                            num++;
                        }
                    }
 				}
			}
		}
		cout << num << "\n";
	}
}
