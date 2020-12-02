
//https://leetcode.com/problems/sum-of-subarray-minimums/

class Solution {
public:
    long long int sumSubarrayMins(vector<int>& arr) {
        long long int sum = 0;
        for(long long int i=0;i<arr.size();i++){
            for(long long int j=i;j<arr.size();j++){
                long long int min = arr[j];
                for(long long int k=i;k<=j;k++){
                    if(min > arr[k]){
                        min = arr[k];
                    }
                }
                sum +=min;
            }
        }
        return sum;
    }
};
