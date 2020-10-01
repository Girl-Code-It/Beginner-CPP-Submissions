#include<bits/stdc++.h>
#include<unordered_map>
using namespace std ;

int lengthOfLongestSubsetWithZeroSum(int* arr, int n){
    unordered_map<int,int>m;
    int sum = 0 , maxLen = 0 ;
    for(int i = 0 ; i < n ; i++){
        arr[i] += arr[i - 1] ;
    }
    for(int i = 0 ; i < n ; i++){
        if(arr[i] == 0) // if by adding next element with previous we get sum 0 
        {
            if(maxLen < i+1) 
                maxLen = i+1 ;
        }
		// if we have arr[i] already in map and 
		// we find it again means the sum of elements btw both same elements will be 0
        else if(m.count(arr[i])) 
        {
            if(maxLen < i - m[arr[i]])
                maxLen = i - m[arr[i]] ;
        }
        else
            m[arr[i]] = i ; // otherwise add it in map .
     
    }
    return maxLen ;
}




