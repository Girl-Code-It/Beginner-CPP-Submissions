// https://practice.geeksforgeeks.org/problems/maximum-sum-increasing-subsequence4749/1#

class Solution{
		

	public:
	int maxSumIS(int arr[], int n)  
	{  
        int t[n+1];
            
        for(int i=0;i<n;i++){
            t[i] = arr[i];
            for(int j=0;j<i;j++){
                if(arr[j] < arr[i])
                    t[i] = max(t[i],arr[i]+t[j]);
            }
        }
        
        int ans = 0;
        for(int i=0;i<n;i++){
            ans = max(ans,t[i]);
        }
        
        return ans;
	}  
};
