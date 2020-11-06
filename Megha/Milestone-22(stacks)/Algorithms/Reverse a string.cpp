#include <bits/stdc++.h>
#include<stack> //stck from standard library
using namespace std;

void Reverse(char *str,int n){
    stack<char> S;
    for(int i=0;i<n;i++){
        S.push(str[i]);  //push each element in the list
    }
    
    for(int i=0;i<n;i++){
        str[i] = S.top();  //overwite the character at index i
        S.pop();  //perform pop
    }
}

int main() {
    char str[51];  //input sting
    cin>>str;
    Reverse(str,strlen(str)); //calling reverse function
    cout<<str;
}
