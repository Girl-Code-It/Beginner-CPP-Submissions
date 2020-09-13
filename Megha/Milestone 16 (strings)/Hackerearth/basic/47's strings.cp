

#include <iostream>
#include <string.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
    char s[1000001];
    cin>>s;
    long long no=0,ans=0;
    for(int l=0;s[l]!=0;l++){
        if(s[l] == '$' || s[l] == '&'){
          no = l+1;
          
        }
        ans += no;;
    }
    cout<<ans;
    cout<<endl;
    }
    return 0;
}
