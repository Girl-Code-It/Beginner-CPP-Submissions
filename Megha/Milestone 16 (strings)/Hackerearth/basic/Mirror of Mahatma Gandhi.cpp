


#include <iostream>
#include<string.h>
using namespace std;
int main() {
    int t;
    cin>>t;

    while(t--){
            
        char s[100000];
        cin>>s;
       int ans=0;
       int l=strlen(s);

        for(int i=0;i<l;i++){
            if(s[i] != s[l-i-1]){
                 ans=1;
       }
       else{
                for(int i=0;i<l;i++){
           if(s[i] != '0' && s[i] != '1' && s[i] != '8'){
                ans=1;
                break;}
    }
    }
         }
        
         if(ans==1){
             cout<<"No";
          }
           else{
           cout<<"Yes";
          }
        cout<<endl;
    }
    return 0;
}
