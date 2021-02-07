//https://codezen.codingninjas.com/practice/470/750/longest-subset-zero-sum

#include<unordered_map>

int lengthOfLongestSubsetWithZeroSum(int* arr, int n) {
    // Write your code here
    unordered_map<int,int> m;
    int sum=0,mlen=0,i=-1;
    m[sum] = i;
    while(i<n-1){
        i++;
        sum += arr[i];
        
        if(m.find(sum) != m.end()){
            int len = i - m[sum];
                if(len > mlen)
                    mlen = len;
        }
        else{
            m[sum] = i;
        }
        
    }
    return mlen;
}
