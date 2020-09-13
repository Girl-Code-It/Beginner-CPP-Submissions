

#include<iostream>
#include<string.h>
using namespace std;
int main() {
    int t,count=0,ans,n=0;
	long long i,j,k;
    cin>>t;
    for(i=0;i<t;i++){
       int l;
       
    char s[1000000];  //string
    cin>>s;
     l=strlen(s);

    for(j=0;j<l;j++){
     if(s[j]=='Z'){
		 n++;
	 }
	}
	
	 for(k=0;k<n;k++){
    for(j=0;j<l;j++){
        if(s[j] == 'Z' && s[j+1] == 'O'){
           ans=s[j];
           s[j]=s[j+1];
           s[j+1]=ans;
           count++;
        }
    }
   }
	  cout<<count;
	  
    cout<<endl;
    }
    return 0;
}
