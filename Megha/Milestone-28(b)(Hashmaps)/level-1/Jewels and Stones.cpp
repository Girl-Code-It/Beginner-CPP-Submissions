//https://leetcode.com/problems/jewels-and-stones/

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<int> s;
        
        int lj = jewels.length();
        int ls = stones.length();
        int count=0;
        
        for(int i=0;i<lj;i++){
            s.insert(jewels[i]);
        }
        
        for(int i=0;i<ls;i++){
            if(s.find(stones[i]) != s.end())
                count++;
        }
        
        return count;
    }
};
