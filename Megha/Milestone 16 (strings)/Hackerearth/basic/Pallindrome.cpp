

#include<iostream>
#include<string.h>
using namespace std;
int main() {
    long long i,l,j;
    
    char s[1000000];  //string
    cin>>s;
    l=strlen(s);
		for(j=0;(j<l/2 && s[j]==s[l-j-1]);j++);
		if(j == l/2){
    cout<<l-1;
   }
   else{
        cout<<l;
    }
    cout<<endl;
   
    return 0;
}
