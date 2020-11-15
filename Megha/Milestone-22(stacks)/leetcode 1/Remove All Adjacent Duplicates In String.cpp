
//https://leetcode.com/problems/valid-parentheses/submissions/

class Solution {
public:
    string removeDuplicates(string S) {
        stack<char> s;
        
        for(int i=0;i<S.length();i++){
            if(s.empty()){
                s.push(S[i]);
            }
            else if(!s.empty()){
                if(s.top() == S[i]){
                    s.pop();
                }
                else{
                s.push(S[i]);}
            }
        }
       string ans = "";
        if(!s.empty()){
        while(!s.empty()){
            ans.push_back(s.top());
            s.pop();
        }
            for(int i=0;i<ans.length();i++){
               s.push(ans[i]);
            }
             for(int i=0;i<ans.length();i++){
               ans[i]=s.top();
                 s.pop();
            }
        }
        return ans;
    }
};
