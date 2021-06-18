//https://leetcode.com/problems/sort-characters-by-frequency/submissions/

 bool compare(const pair<char,int> &a, const pair<char,int> &b){
        return a.second>b.second;
    }

class Solution {
public:
   
    string frequencySort(string s) {
        unordered_map<char,int> m;
        int l = s.length();
        
        for(int i=0;i<l;i++){
            m[s[i]]++;
        }
        
        int k = 0;
        string str;
         vector<pair<char,int>> v;
        
        for(auto itr:m){
             v.emplace_back(itr.first,itr.second);
        }
       
        sort(v.begin() ,v.end() , compare);
        
        for(auto itr:v){
            cout<<itr.second<<" ";
            int i = itr.second;
            while(i>0){
                str += itr.first;
                i--;
            }
        }
        
        return str;
    }
};
