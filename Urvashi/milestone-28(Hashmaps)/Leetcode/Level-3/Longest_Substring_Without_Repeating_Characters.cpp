class Solution {
public:
    int lengthOfLongestSubstring(string str) {
        int length = 0 , i = 0 , j = 0 ;
        unordered_set<char>s;
        
        while(j < str.size())
        {
            if(s.find(str[j]) == s.end())
            {
                s.insert(str[j]) ;
                j++ ;
                length = max(length , j - i) ;
            }
            else
            {
                s.erase(str[i]);
                i++;
            }
        }
        return length;
    }
};
