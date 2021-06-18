//https://codezen.codingninjas.com/practice/470/2299/minimum-operations

#include<unordered_map>;

int ReturnMinOperationCount(int arr[], int n) {
	/*Write your code here. 
	*Don't write main().
	*Don't take input, it is passed as function argument.
	*Don't print output.
	*Taking input and printing output is handled automatically.
	*/ 
    unordered_map<int,int> m;
    int maxi = 0, ans=INT_MIN;  //this will calculate the maximum no. which are equal
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }
    
    for(auto i:m){
        ans = max(ans,i.second);
    }
    
    return n-ans;
}
