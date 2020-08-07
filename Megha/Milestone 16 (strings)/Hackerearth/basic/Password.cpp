


#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int t,l,l1,i,ans,k,j;
    cin>>t;
    char s[100][15],len;
    //input of all the strings
    for(i=0;i<t;i++){
      cin>>s[i];
      }
      //iterating string till t
    for(i=0;i<t;i++){
        //length of the string suppose if i=0 then it will be abc so it's length is 3
      l=strlen(s[i]);
      for(j=i;j<t;j++){
          //length of the string suppose if j=0 then it will be abc so it's length is 3 and it will check all length inside j loop
          l1=strlen(s[j]);

          for(k=0;k<l&&k<l1;k++){
              int ans=0;
              //if k=0 and i=0 s[i][k] = a and if j=0 and l1=3 the s[j][l1-k-1] = c
          if(s[i][k] != s[j][l1-k-1]){
              ans=1;
              break;
          }
         
          }
           if(k==l && ans==0){
              cout<<l<<" ";
              //the letter in between
              len=s[i][(l-1)/2];
              cout<<len;
          }
      }
}

    return 0;
}
