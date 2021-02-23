#include <bits/stdc++.h>

using namespace std;

int main()
{
	int testCases = 1; 
	// cin>>testCases;

	while(testCases-->0)
	{
		int n; cin>>n;
		int arr[n];
		for(int i = 0; i < n; i++)
		cin>>arr[i];
		int k; cin>>k;

		int index = -1;
		
		for(int i = 0; i < n; i++)
		if(k == arr[i])
		{
			index = i;
			break;
		}

		cout<<index<<endl;
	}
	return 0;
}