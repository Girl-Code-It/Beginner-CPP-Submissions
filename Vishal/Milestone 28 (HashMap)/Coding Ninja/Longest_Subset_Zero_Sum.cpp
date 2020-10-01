#include<unordered_map>

int lengthOfLongestSubsetWithZeroSum(int* arr, int size)
{
    int max_len = 0,sum = 0;

    unordered_map<int,int>m;

    for(int i=0; i<size; i++)
    {
        sum += arr[i];

        //Whole array upto index i , have sum 0
        if(sum == 0)
            max_len = i+1;
            
        //If Sum is already in the Map it means
        //Subarray sum is zero
        if(m.find(sum) != m.end())
            max_len = max(max_len,i-m[sum]);
        else
            m[sum] = i;
    }

    return max_len;
}