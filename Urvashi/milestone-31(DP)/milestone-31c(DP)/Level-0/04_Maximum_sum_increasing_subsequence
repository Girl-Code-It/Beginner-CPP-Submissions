//

#include<iostream>
using namespace std;

int sum(int *nums , int n)
{
    int DP[n+1];
        DP[0] = nums[0];
        for(int i = 1 ; i < n ; i++)
        {
            int temp = 0;
            for(int j = 0 ; j < i ; j++)
            {
                if(nums[j] < nums[i])
                    temp = max(temp , DP[j]);
            }  
            DP[i] = temp+nums[i];
        }
        int ans = 0;
        for(int i = 0 ; i < n ; i++)
            ans = max(ans , DP[i]);
        
        return ans;
}

int main() {
	int t , n ; 
	cin >> t;
	while(t--)
	{
	    cin >> n;
	    int arr[n];
	    for(int i = 0 ; i < n ; i++)
	        cin >> arr[i];
	    cout << sum(arr , n) << "\n";
	}
	return 0;
}
