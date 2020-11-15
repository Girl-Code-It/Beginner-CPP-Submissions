#include <bits/stdc++.h>
#include<stack>
using namespace std;

void evenSubarrays(string str){
    stack<char> s;
    for(int i=0;i<str.length();i++){
        if(s.empty()){
            s.push(str[i]);
        }
        else if(!s.empty()){
            if(s.top() == str[i]){
                s.pop();
            }
            else{
            s.push(str[i]);}
        }
    }
    string ans="";
    if(!s.empty()){
        while(!s.empty()){
           ans.push_back(s.top());
            s.pop();
        }
        for(int i=ans.length()-1;i>=0;i--){
            cout<<ans[i];
        }
        cout<<endl;
    }
    else{
        cout<<"KHALI"<<endl;
    }
    }

int main() {
    int t;
    cin>>t;
    string str;
    while(t--){
    cin>>str;
    evenSubarrays(str);
    }
return 0;
}
