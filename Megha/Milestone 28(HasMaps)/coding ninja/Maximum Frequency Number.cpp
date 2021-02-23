//https://codezen.codingninjas.com/practice/470/624/maximum-frequency-number

#include<unordered_map>

int highestFrequency(int arr[], int n) {
    // Write your code here
    unordered_map<int,int>m;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }
    
    int max = m[arr[0]], ans = arr[0];
    for(int i=0;i<n;i++){
        if(max < m[arr[i]]){
            max = m[arr[i]];
            ans = arr[i];
        }
    }

    return ans;
}
