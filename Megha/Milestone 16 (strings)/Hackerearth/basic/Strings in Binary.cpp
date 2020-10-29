

#include<iostream>
#include<string.h>
using namespace std;
int main() {
    int t,i,j,k,count=0,ans=1;
    cin>>t;
    for(i=0;i<t;i++){    //
       int l;
       cin>>l;
    char s[1000000];  //string
    cin>>s;

    for(j=0;j<l;j++){
        for(k=j+1;k<l;k++){
        if(s[j] == '1' && s[k] == '1'){
           count++;
        }

      } 
   
    }
	   cout<<count;
	   count=0;
    cout<<endl;
    }
    return 0;
}
