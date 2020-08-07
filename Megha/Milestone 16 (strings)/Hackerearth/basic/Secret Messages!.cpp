
#include<iostream>
#include<string.h>
using namespace std;
int main() {
    int t,r,i,ans;
    cin>>t;
    long long l,add;
        
    for(i=0;i<t;i++){

       cin>>l>>add; //length of the string
        //this will increase the no. of times the letter should increase
       
       char s[1000000];  //string
       cin>>s;

       for(long long j=0;j<l;j++){
           if((s[j]>='a' && s[j]<='z')){
               r=add%26;
          ans=(int)s[j]+r;
          if(ans<=122){
            cout<<(char)(ans);
          }
          else{
              cout<<(char)(ans-26);
          }
           }
        else if((s[j]>='A' && s[j]<='Z')){
            r=add%26;
            ans=(int)s[j]+r;
            if(ans<=90){
            cout<<(char)(ans);
          }
          else{
              cout<<(char)(ans-26);
          }
        }
      else if(s[j]>='0' && s[j]<='9'){
          r=add%10;
          ans=(int)s[j]+r;
          if(ans<=57){
              cout<<(char)(ans);
          }
          else{
              cout<<(char)(ans-10);
          }
      }
       else{
           
         cout<<s[j];
       }
       
    }
    cout<<endl;
    }
    return 0;
}
