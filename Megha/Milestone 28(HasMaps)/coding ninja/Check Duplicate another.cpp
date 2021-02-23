//https://codezen.codingninjas.com/practice/470/2296/check-duplicate

#include<unordered_map>

bool CheckDuplicateWithinK(int arr[], int n, int k){
	/*Write your code here. 
	*Don't write main().
	*Don't take input, it is passed as function argument.
	*Don't print output.
	*Taking input and printing output is handled automatically.
	*/ 
    unordered_map<int,int> m;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
        for(int j=i;j<k+i;j++){
            if(m[arr[j]] > 1)
                return true;
        }
    }
    
    return false;
}
