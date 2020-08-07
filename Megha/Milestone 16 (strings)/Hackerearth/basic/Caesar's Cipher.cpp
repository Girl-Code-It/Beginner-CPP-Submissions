


#include <iostream>
#include<string.h>
using namespace std;
int main() {
    int t;
    cin>>t;

    while(t--){
            
        char s1[100000];
        char s2[100000];
        cin>>s1;
        cin>>s2;

       int diff1,diff,ans=0;
        diff = s2[0]-s1[0];
        if(diff < 0)
                diff = (diff+26)%26;

        for(int i=0;s1[i] != '\0';i++){
            diff1 = s2[i] - s1[i];
            if(diff1 < 0)
                diff1 = (diff1+26)%26;
         if(diff1!=diff)
          ans=1;
        }
         
         if(ans==1){
             cout<<"-1";
          }
           else{
           cout<<diff;
          }
        cout<<endl;
    }
    return 0;
}
