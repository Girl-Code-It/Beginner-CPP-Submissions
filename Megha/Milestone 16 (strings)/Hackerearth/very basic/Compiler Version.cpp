


#include <iostream>
#include<string.h>
using namespace std;
int main(){
    int i,j,l,t=3;
   
    while(t--){
        char s[2000];
        cin.getline(s,2000);
        l=strlen(s);
        for(i=0;i<l;i++){
            if(s[i]=='/' && s[i+1]=='/')
            {
                break;
            }
            else{
                
            if(s[i]=='-' && s[i+1]=='>'){
                s[i]='.';
           
            for(j=i+1;j<l;j++){
                s[j]=s[j+1];
            }
            }
        }
         
    }
    cout<<s;
    cout<<endl;
    }
    return 0;
}
