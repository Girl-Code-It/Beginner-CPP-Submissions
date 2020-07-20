#include<bits/stdc++.h>
	int highestFrequency(int *arr, int n){	 
		unordered_map<int, int> hash; 
        for (int i = 0; i < n; i++) 
            hash[arr[i]]++; 
        // find the max frequency 
        int max_count = 0, res = -1; 
        for (int i=0;i<n;i++) 
        { 
           if(hash[arr[i]]>max_count){
               max_count=hash[arr[i]];
               res=arr[i];
           }
        } 
        return res; 
 	}
