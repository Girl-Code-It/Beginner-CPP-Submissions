//https://leetcode.com/problems/top-k-frequent-words/

bool cmp(pair<string,int> &a,pair<string,int> &b){
    if(a.second > b.second){
        return true;
    }
    else if(a.second == b.second){
        return (a.first<b.first);
    }
    else
    return false;
}

class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
     unordered_map<string,int> m;
     vector<pair<string,int>> v;
        vector<string> ans;
        
        for(auto i:words){
            m[i]++;
        }
        
        for(auto i:m){
            v.emplace_back(i.first,i.second);
        }
        
        sort(v.begin(),v.end(),cmp);
        for(auto i:v){
            if(k>0){
            ans.push_back(i.first);}
         k--;
        }
        
        return ans;
    }
};
