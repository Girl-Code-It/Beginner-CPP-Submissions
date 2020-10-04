#include <bits/stdc++.h>
using namespace std;
void ReverseString(string str){
    if(str.size()==0){
        return;
    }
    ReverseString(str.substr(1));
    cout<<str[0];
}
int main() {
    string s1;
    cin>>s1;
    ReverseString(s1);
}
