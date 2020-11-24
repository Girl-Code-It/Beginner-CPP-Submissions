
//https://leetcode.com/problems/remove-k-digits/submissions/

class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> s;
       
        int count=k;
        for(int i=0;i<num.length();i++){
            
            while(!s.empty() && s.top() > num[i] && k > 0){
                    s.pop();
                    k--;
                }
            
            if(!s.empty() || num[i] != '0'){
                s.push(num[i]);
            }
           
            
        }
         //Now remove the largest values from the top of the stack
        while(!s.empty() && k--)
            s.pop();
        if(s.empty())
            return "0";
        
        string result = "";
        string ans = "";
        if(!s.empty()){
        while(!s.empty()){
            result.push_back(s.top());
            s.pop();
        }
            for(int i=result.length()-1;i>=0;i--){
                ans += result[i];
            }
        }
        return ans;
    }
};
