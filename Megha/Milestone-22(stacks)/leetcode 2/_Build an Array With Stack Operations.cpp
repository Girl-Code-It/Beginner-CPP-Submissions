
//https://leetcode.com/problems/build-an-array-with-stack-operations/submissions/

class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
       vector<string> v;
        int start = 0;
        int last = target.size();
        
        for(int i=1;i<=n;i++){
            if(start<last){
            if(target[start] == i){
                v.push_back("Push");
                start++;
            }
            else{
                v.push_back("Push");
                v.push_back("Pop");
            }
        }
        }
        
        return v;
    }
};
