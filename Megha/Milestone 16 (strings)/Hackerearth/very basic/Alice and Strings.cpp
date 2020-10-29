

#include <iostream>
#include<string.h>
using namespace std;
int main() {
    int i,j,l1,l2,ans=0;
        char s1[100];
        cin>>s1;
        char s2[100];
        cin>>s2;
        l1=strlen(s1);
        l2=strlen(s2);
        int diff[l1];
    if(l1 != l2){
            ans=0;
       }
        for(i=0;i<l1;i++){
            if(s1[i]>s2[i])
                ans=0;
            
            else
                diff[i]=s2[i]-s1[i];
            
        }
            for(i=0;i<l1;i++){
                if(diff[i]<diff[i+1]){
                    ans=0;
                }
                ans=1;
        }


    if(ans==1){
           cout<<"YES";
       }
       else{
           cout<<"NO";
       }
    return 0;
}
