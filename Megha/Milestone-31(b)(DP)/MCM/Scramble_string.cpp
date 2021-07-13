//https://leetcode.com/problems/scramble-string/submissions/

//Recursive
class Solution {
public:
    bool isScramble(string a, string b) {
        // if both strings are same then it will be scramble string
        if(a.compare(b) == 0){
            return true;
        }
        // if any of the string is empty then also it cannot me scramble string
        if(a == ""){
            return false;
        }
           
        bool flag = false;
        int n = a.length();
      
        // Traversing both strings we will check following conditions..
        for(int i=1;i<=n-1;i++){
             // if at any node.
            // if first half of the first string is scramble of second half of second string and 
            // second half of the first string is scramble of first half of second string 
            if( (isScramble(a.substr(0,i),b.substr(n-i,i))
                && isScramble(a.substr(i,n-i),b.substr(0,n-i)))
               // OR
            // if first half of the first string is scramble of first half of second string and 
            // second half of the first string is scramble of second half of second string 
               || 
                (isScramble(a.substr(0,i),b.substr(0,i)) && 
                isScramble(a.substr(i,n-i),b.substr(i,n-i))) ){
                flag = true;
                break;
            }
        }
           
        return flag;
    }
};

//Recursive + Memoized
unordered_map<string,bool> m;

class Solution {
public:
    bool isScramble(string a, string b) {
        // if both strings are same then it will be scramble string
        if(a.compare(b) == 0){
            return true;
        }
        // if any of the string is empty then also it cannot me scramble string
        if(a == ""){
            return false;
        }
           
        bool flag = false;
        int n = a.length();
        
        string key = a;
        key += " " + b;
        if(m.find(key) != m.end()){
            return m[key];
        }
        
        // Traversing both strings we will check following conditions..
        for(int i=1;i<=n-1;i++){
             // if at any node.
            // if first half of the first string is scramble of second half of second string and 
            // second half of the first string is scramble of first half of second string 
            if( (isScramble(a.substr(0,i),b.substr(n-i,i))
                && isScramble(a.substr(i,n-i),b.substr(0,n-i)))
               // OR
            // if first half of the first string is scramble of first half of second string and 
            // second half of the first string is scramble of second half of second string 
               || 
                (isScramble(a.substr(0,i),b.substr(0,i)) && 
                isScramble(a.substr(i,n-i),b.substr(i,n-i))) ){
                flag = true;
                break;
            }
        }
           
        return m[key] = flag;
    }
};
