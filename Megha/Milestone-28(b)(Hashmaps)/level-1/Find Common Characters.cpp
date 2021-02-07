//https://leetcode.com/problems/find-common-characters/

class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
      
        vector<string> ans;
        vector<int> v(26,INT_MAX);
        
        for(auto i:A){
            vector<int> count(26,0);
            for(auto j:i){
                count[j - 'a']++;
            }
            
            for(int i=0;i<26;i++){
                v[i] = min(v[i],count[i]);
            }
        }
        
        for(int i=0;i<26;i++){
            for(int j=0;j<v[i];j++){
                ans.push_back(string(1,i+'a'));
            }
        }
        
        return ans;
    }
};
