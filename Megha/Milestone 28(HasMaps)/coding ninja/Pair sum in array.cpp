//https://codezen.codingninjas.com/practice/470/20/pair-sum-in-array

#include<unordered_map>

int pairSum(int *arr, int n, int num)
{
	//Write your code herew
    int count = 0;
    unordered_map<int,int> m;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }
    
    for(int i=0;i<n;i++){
        count += m[num-arr[i]];
        
        if(num-arr[i] == arr[i]){
            count--;
        }
    }
    return count/2;
}
