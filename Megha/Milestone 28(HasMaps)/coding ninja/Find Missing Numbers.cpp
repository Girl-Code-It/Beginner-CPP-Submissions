//https://codezen.codingninjas.com/practice/470/2297/find-missing-numbers

#include<unordered_set>

void FindMissingElements(int arr[], int n){
	/*Write your code here.
	*Dont write main(). 
	*Dont take input, it is passed as function argument.
	*Print output as specified in question.
	*/
    unordered_set<int> s;
    int low = INT_MAX,high =INT_MIN;
    
    for(int i=0;i<n;i++){
        low = min(low,arr[i]);
        high = max(high,arr[i]);
        s.insert(arr[i]);
    }
    
    for(int i=low;i<=high;i++){
        if(s.find(i) == s.end())
            cout<<i<<" ";
    }

}
