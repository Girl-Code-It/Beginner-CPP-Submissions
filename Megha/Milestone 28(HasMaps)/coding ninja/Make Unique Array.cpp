//https://codezen.codingninjas.com/practice/470/2291/make-unique-array

#include<unordered_map>

int CountExtraElements(int arr[], int n) {
	/*Write your code here. 
	*Don't write main().
	*Don't take input, it is passed as function argument.
	*Don't print output.
	*Taking input and printing output is handled automatically.
	*/ 
    unordered_map<int,int> m;
    int count = 0;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }
    for(int i=0;i<n;i++){
     if(m.find(arr[i]) != m.end()){
        if(m[arr[i]] > 1)
            count += (m[arr[i]] - 1);
        m.erase(arr[i]);
     }
    }
    return count;
}
