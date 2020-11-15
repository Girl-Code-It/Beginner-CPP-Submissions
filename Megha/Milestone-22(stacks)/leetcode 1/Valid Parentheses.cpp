
//https://leetcode.com/problems/valid-parentheses/submissions/

class Solution {
public:
    bool ispair(char opening,char closing) {
        if(opening == '[' && closing == ']') return true;
        else if(opening == '{' && closing == '}') return true;
        else if(opening == '(' && closing == ')') return true;
        return false;
    }
public:
    bool isValid(string s) {
        stack<char> s1;
        for(int i=0;i<s.length();i++){
            if(s[i]=='{' || s[i]=='[' || s[i]=='('){
                s1.push(s[i]);
            }
            else if(s[i]=='}' || s[i]==']' || s[i]==')'){
                if(s1.empty() || !ispair(s1.top(),s[i])){
                    return false;
                }
                s1.pop();
            }
        }
        return s1.empty()?true:false;
    }
};

