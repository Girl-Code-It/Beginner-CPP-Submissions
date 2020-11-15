#include <bits/stdc++.h>
#include <stack>
using namespace std;

bool isEqual(char opening, char closing){
    if(opening == '[' && closing == ']'){
        return true;
    }
    else if(opening == '{' && closing == '}'){
        return true;
    }
    else if(opening == '(' && closing == ')'){
        return true;
    }
    return false;
}

bool CheckBalancedParenthesis(char *str){
    stack<char> s;
    int n = strlen(str);
    for(int i=0;i<n;i++){
        if(str[i] == '[' || str[i] == '(' || str[i] == '{'){
            s.push(str[i]);
        }
        else if(str[i] == ']' || str[i] == ')' || str[i] == '}'){
            if(s.empty() || !isEqual(s.top(),str[i])){
                return false;
            }
            else{
            s.pop();}
        }
    }
    return s.empty() ? true:false;
}

int main() {
    char str[51];
    cin>>str;
    if(CheckBalancedParenthesis(str)){
        cout<<"balanced";
    }
    else{
        cout<<"not balanced";
    }
    return 0;
}
