#include <bits/stdc++.h>
#include<stack>
using namespace std;

bool compare(char opening,char closing){
    if(opening == '[' && closing == ']'){ return true;}
    else if(opening == '{' && closing == '}'){ return true;}
    else if(opening == '(' && closing == ')'){ return true;}
    return false;
}

bool balancedBracket(char *str){
    stack<char> s;
    for(int i=0;i<strlen(str);i++){
        if(str[i] == '[' || str[i] == '{' || str[i] == '('){
            s.push(str[i]);
        }
        else if(str[i] == ']' || str[i] == '}' || str[i] == ')'){
            if(s.empty() || !compare(s.top(),str[i])){
                return false;
            }
            else{
            s.pop();}
        }
    }
   return s.empty()?true:false;
}

int main() {
    int t;
    cin>>t;
    char str[1000];
    while(t--){
    cin>>str;
    if(balancedBracket(str)){
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
}
return 0;
}
