#include <bits/stdc++.h>
using namespace std;

int t[1001][1001];

bool isPallindrome(string str,int i,int j){
        for(int k=i;k<=j;k++){
            if(str[k] != str[j]){
                return false;
            }
        j--;
        }
        
        return true;
}
int solve(string str,int i,int j){
        if(i >= j){
            return 0;
        }
        if(isPallindrome(str,i,j) == true){
            return 0;
        }
        
        if(t[i][j] != -1){
            return t[i][j];
        }
        
        int ans = INT_MAX;
        for(int k=i;k<j;k++){
            int temp = solve(str,i,k) + solve(str,k+1,j) + 1;
            ans = min(ans,temp);
        }
        
        return t[i][j] = ans;
}
int palindromicPartition(string str)
{
        int i=0,j=str.length()-1;
        memset(t,-1,sizeof(t));
        
        return solve(str,i,j);
}

int main(){
    string s;
    cin>>s;
    cout<<palindromicPartition(s);
}
