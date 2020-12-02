
//https://leetcode.com/problems/validate-stack-sequences/

class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        
        stack<int> s;
        int len = pushed.size();
        int index=0;
        
        for(int i=0;i<len;i++){
            s.push(pushed[i]);
            while(!s.empty() && s.top() == popped[index]){
                s.pop();
                index++;
            }
        }
        cout<<len<<" "<<index;
        
        return len == index?true:false;
    }
};
