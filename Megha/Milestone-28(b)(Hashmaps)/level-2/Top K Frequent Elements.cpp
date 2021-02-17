//https://leetcode.com/problems/top-k-frequent-elements/submissions/

bool cmp(pair<int,int> &a,pair<int,int> &b){
    return a.second>b.second;
}

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> m;
        vector<int> v;
        
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        
        vector<pair<int,int>> temp;
        for(auto i:m){
            temp.emplace_back(i.first,i.second);
        }
        
        sort(temp.begin(),temp.end(),cmp);
        
        for(auto i:temp){
            cout<<i.first<<" "<<i.second<<endl;
            if(k>0){
                v.emplace_back(i.first);}
            k--;
        }
        
        return v;
    }
};
