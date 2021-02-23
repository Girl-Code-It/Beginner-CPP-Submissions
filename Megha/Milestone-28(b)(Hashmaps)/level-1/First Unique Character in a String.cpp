//https://leetcode.com/problems/first-unique-character-in-a-string/submissions/

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> m;
        int l = s.length();
        
        for(int i=0;i<l;i++){
            m[s[i]]++;
        }
        
        for(int i=0;i<l;i++){
            if(m[s[i]] == 1)
                return i;
        }
        
        return -1;
    }
};
