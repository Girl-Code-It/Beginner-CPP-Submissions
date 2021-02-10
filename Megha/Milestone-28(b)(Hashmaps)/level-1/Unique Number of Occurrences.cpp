//https://leetcode.com/problems/unique-number-of-occurrences/

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> m;
        unordered_set<int> s;
        int n = arr.size();
        
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
    
        
        for(auto i:m){
            if(s.find(i.second) != s.end()){
                return false;}
            s.insert(i.second);
        }
        
        return true;
    }
};
