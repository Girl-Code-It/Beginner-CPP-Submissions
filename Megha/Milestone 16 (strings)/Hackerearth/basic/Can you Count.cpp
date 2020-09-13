

#include<iostream>
#include<string.h>
using namespace std;
int main() {
    int t,i,l;
    cin>>t;
    while(t--){
       int countA=0,countE=0,countI=0,countO=0,countU=0;
	       long long count=0,ans=1;
    char s[1000000];  //string
    cin>>s;
    l=strlen(s);
    for(i=0;i<l;i++){
    if(s[i]=='a' && countA==0){
        count++;
        countA++;
    }
    else if(s[i]=='e' && countE==0){
        count++;
        countE++;
    }
    else if(s[i]=='i' && countI==0){
        count++;
        countI++;
    }
    else if(s[i]=='o' && countO==0){
        count++;
        countO++;
    }
    else if(s[i]=='u' && countU==0){
        count++;
        countU++;
    }
    else if(s[i]=='_'){
       ans=ans*count;
    }
    }
    cout<<ans;
    cout<<endl;
    }
    return 0;
}
