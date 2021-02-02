//https://codezen.codingninjas.com/practice/470/2290/distinct-left

#include<unordered_map>
#include<queue>

int FindDistinctCount(int *arr, int n,int k) {
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
    
    priority_queue<pair<int,int> > q;
    for(auto i:m){
        q.push({i.first,i.second});
    }
    
    while(!q.empty() && k--){
        auto temp = q.top();
        q.pop();
        temp.second--;
        if(temp.second != 0){
            q.push(temp);
        }
        else
        m.erase(temp.first);
    }
    
    return m.size();
}
