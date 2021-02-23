#include <iostream>

using namespace std;
int getMin(int arr[], int n)
{
	int min = n+1, k = 0;

	for(int i = 0; i < 26; i++)
	if(min > arr[i] && arr[i] != 0)
	{
		min = arr[i];
		k = i;
	} 
	return k;
}
int main()
{
	int testCases; cin>>testCases;

	while(testCases-->0)
	{
		string s, res = ""; cin>>s;
		int n = s.length(), arr[26] = {0};

		for(int i = 0; i < n; i++)
		arr[s[i] - 'a']++;

		while(res.length() != n)
		{
			int k = getMin(arr,n);

			for(int j = 0; j < arr[k]; j++)
			res += ('a'+(k));

			arr[k] = n;
		}

		cout<<res<<endl;
	}
	return 0;
}