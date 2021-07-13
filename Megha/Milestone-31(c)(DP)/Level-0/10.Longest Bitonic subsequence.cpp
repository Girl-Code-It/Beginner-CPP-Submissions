//https://practice.geeksforgeeks.org/problems/longest-bitonic-subsequence0824/1

class Solution{
	public:
	int LongestBitonicSequence(vector<int>nums)
	{
	    int n = nums.size();
	    int t[n+1],t2[n+1];
	    
	    for(int i=0;i<n;i++){
	        t[i] = 1;
	        for(int j=0;j<i;j++){
	            if(nums[j]<nums[i])
	            t[i] = max(t[i],1+t[j]);
	        }
	    }
	    
	    t2[n-1] = 1;
	    for(int i=n-2;i>=0;i--){
	        t2[i] = 1;
	        for(int j=i+1;j<n;j++){
	            if(nums[j]<nums[i])
	            t2[i] = max(t2[i],1+t2[j]);
	        }
	    }
	    
	    int ans = 0;
	    for(int i=0;i<n;i++){
	        ans = max(ans,t2[i]+t[i]-1);
	    }
	    
	    return ans;
	}
};
