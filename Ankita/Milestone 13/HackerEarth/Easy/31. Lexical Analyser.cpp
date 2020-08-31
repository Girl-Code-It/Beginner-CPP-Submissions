#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int n, num = 0, index = 0;
	cin >> n;
	string arr[n], temp, variables[n];
	getline(cin, temp);
	for(int i = 0; i < n; i++)
	{
		temp = "";
		int flag  = 1;
		getline(cin, arr[i]);
		for (int j = 0; j < arr[i].size(); j++)
		{
			if(arr[i][j] != ' ')
				temp += arr[i][j];
			if (arr[i][j] == '=')
			{
				if(i == 0)
				{
					variables[index] = temp;
					index++;
					num++;
				}
				else
				{
					for(int k = 0; k < index; k++)
					{
						if(temp == variables[k])
						{
							flag = 0;
							break;
						}
					}
					if (flag == 1)
					{
						variables[index] = temp;
						index++;
						num++;
					}
				}
			}
		}
	}
	cout << num;

}
