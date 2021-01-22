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

		ll sum = 0, count = 0;

		for(int i = 0; i < n; i++)
		{
            if(arr[i] >= 0)
            {
                sum += arr[i];
                count++;
            }
		}
		if(count == 0) 
		{
			sum += *max_element(arr, arr+n);
			count++;
		}
		cout<<sum<<" "<<count<<endl;
	}
	return 0;
}