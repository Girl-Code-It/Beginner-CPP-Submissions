
//https://leetcode.com/problems/backspace-string-compare/submissions/

class Solution {
public:
    bool backspaceCompare(string S, string T) {
        stack<char> s1,s2;
        for(int i=0;i<S.length();i++){
            if(s1.empty() && S[i]!='#'){
                s1.push(S[i]);
            }
            else if(!s1.empty()){
                if(S[i]=='#'){
                    s1.pop();
                }
                else{
                s1.push(S[i]);}
            }
        }
        string result1 = "";
        while(!s1.empty()){
            result1.push_back(s1.top());
            s1.pop();
        }
        
        for(int i=0;i<T.length();i++){
            if(s2.empty() && T[i]!='#'){
                s2.push(T[i]);
            }
            else if(!s2.empty()){
                if(T[i]=='#'){
                    s2.pop();
                }
                else{
                s2.push(T[i]);}
            }
        }
        
        string result2 = "";
        while(!s2.empty()){
            result2.push_back(s2.top());
            s2.pop();
        }
       
        if(result1 == result2){
        return true;}
        return false;
    }
};
