//https://codezen.codingninjas.com/practice/470/2292/count-distinct-arrays

#include<unordered_map>
#define mod 1000000007

int CountDistinctArrays(int arr[], int n) {
	/*Write your code here. 
	*Don't write main().
	*Don't take input, it is passed as function argument.
	*Don't print output.
	*Taking input and printing output is handled automatically.
	*/ 	
    unordered_map<int,int> m;
    long count = 1;
    
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }
    
    for(auto i:m){
        count *= (i.second + 1);
        count = count%mod;
    }
    count--;
    
    return (int)count;
}
