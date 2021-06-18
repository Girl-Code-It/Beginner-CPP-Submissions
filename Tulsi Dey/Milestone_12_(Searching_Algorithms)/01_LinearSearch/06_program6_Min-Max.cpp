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
		for(int i = 0; i < n; i++) cin>>arr[i];

		int sum = 0, max = *max_element(arr,arr+n), min = *min_element(arr,arr+n);
		for(int i = 0; i < n; i++) sum += arr[i];

		cout<<(sum-max)<<" "<<(sum-min)<<endl;
		
	}
	return 0;
}