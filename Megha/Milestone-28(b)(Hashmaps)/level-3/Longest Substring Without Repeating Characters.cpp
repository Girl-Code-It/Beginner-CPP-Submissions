//https://leetcode.com/problems/longest-substring-without-repeating-characters/submissions/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> m;
        int mlen=0,i=-1,j=-1;
        
        while(true){
            bool flag1 = false;
            bool flag2 = false;
            
            int n=s.length()-1;
            while(i<n){
                flag1 = true;
                i++;
                
                m[s[i]]++;
                if(m[s[i]] == 2){
                    break;
                }
                else{
                    int len = i-j;
                    if(len>mlen){
                        mlen=len;
                    }
                }
            }
            while(j<i){
                flag2 = true;
                j++;
                m[s[j]]--;
                if(m[s[i]] == 1){
                    break;
                }
            }
            if(flag1 == false && flag2 == false){
                break;
            }
        }
        
        return mlen;
    }
};
