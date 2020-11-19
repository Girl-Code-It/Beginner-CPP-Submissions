#include <bits/stdc++.h>
#include <stack>
using namespace std;

void validParentheses(string str){
    stack<char> s;
    int count=0;
    for(int i=0;i<str.length();i++){
        if(str[i] == '('){
            s.push(str[i]);
            count++;
        }
        else if(str[i] == ')'){
            if(!s.empty() && s.top()=='('){
                s.pop();
                count=count-2;
            }
            count++;
        }
    }
    cout<<count<<endl;
}

int main() {
    string str;
    cin>>str;
    validParentheses(str);
}
