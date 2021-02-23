//https://codezen.codingninjas.com/practice/470/2295/longest-sequence

#include<unordered_set>

int LengthOfLongestSeq(int arr[], int n){
	/*Write your code here. 
	*Don't write main().
	*Don't take input, it is passed as function argument.
	*Don't print output.
	*Taking input and printing output is handled automatically.
	*/ 
    unordered_set<int> s;
    int count = 0,ans=0;
    
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    
    for(int i=0;i<n;i++){
        if(s.find(arr[i]-1) == s.end()){
            int j = arr[i];
            while(s.find(j) != s.end()){
                j++;
                count++;
            }
            ans = max(ans,count);
            count=0;
        }   
    }
    
    return ans;
}
