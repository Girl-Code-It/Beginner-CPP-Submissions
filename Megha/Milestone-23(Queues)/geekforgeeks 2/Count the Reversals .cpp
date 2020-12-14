#include <bits/stdc++.h>
#include <stack>
using namespace std;

int countMin(string str){
        int l = str.length();
       
        if(l%2){
            return -1;
        }
        

    stack<char> s;
    for(int i=0;i<l;i++){
        if(str[i] == '}' && !s.empty()){
            if(s.top() == '{'){
                s.pop();
            }
            else
                s.push(str[i]);
        }
        else{
            s.push(str[i]);
        }
    }
    
    // Length of the reduced expression 
    // stackSize = (m+n) 
    int stackSize = s.size();
    
    // count opening brackets at the end of 
    // stack 
    int count = 0;
    while(!s.empty() && s.top() == '{'){
        s.pop();
        count++;
    }
            
    // return ceil(m/2) + ceil(n/2) which is 
    // actually equal to (m+n)/2 + n%2 when 
    // m+n is even.
     return (stackSize/2 + count%2);
}

int main() {
    int t;
    cin>>t;
    
    while(t--){
        string str;
        cin>>str;
        cout<<countMin(str)<<endl;
    }
return 0;
}
