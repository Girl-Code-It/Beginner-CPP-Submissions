#include<bits/stdc++.h>

int lengthOfLongestSubsetWithZeroSum(vector<int> arr, int n)
{
    // Write your code here
	int sum = 0, i= -1, max_len = 0;
    unordered_map<int, int>m;
	
    m.insert({sum, i});
    
    for(i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
        
        if(m.find(sum) != m.end())
            max_len = max(max_len, i - m[sum]);
    	else
            m.insert({sum, i});
    }
    return max_len;
}	
