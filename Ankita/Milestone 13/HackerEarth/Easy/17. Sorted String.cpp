#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	string temp;
	getline(cin, temp);
	for(int i = 0; i < t; i++)
	{
		string s, sorted_s = "";
		getline(cin, s);
		int arr[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0} , flag;
		//cout << arr[0] << arr[1] << arr[2];
		for(int j = 0; j < s.size(); j++)
		{
			arr[int(s[j])-97]++;

		}
		int smallest, index;
		/*for(int ran = 0; ran < 26; ran++)
            cout<< arr[ran] << "\n";*/
		//loop for finding 1st non-zero element of array arr.
		for(int j = 0; j < 26; j++)
		{
			if(arr[j] > 0)
			{
				index = j;
				smallest = arr[index];
				break;
			}
		}
		for(int k = 0; k < 26; k++)
		{
			flag = 0;
			for(int j = 0; j < 26; j++)
			{
				if(arr[j] < smallest && arr[j] > 0)
				{
					smallest = arr[j];
					index = j;
				}

			}
			for(int j = 0; j < arr[index]; j++)
			{
				sorted_s += char(index+97);
				//cout << char(index+97);
			}
			arr[index] = 0;
			for(int j = 0; j < 26; j++)
			{
				if(arr[j] > 0)
				{
					index = j;
					smallest = arr[index];
					flag = 1;
					break;
				}
			}
			if (flag == 0)
				break;
		}
		cout << sorted_s << "\n";
		//cout << "\n";

	}


}
