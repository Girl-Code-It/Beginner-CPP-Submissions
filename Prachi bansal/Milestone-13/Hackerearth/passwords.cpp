#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char str[50][50];
	string s,c;
	char temp;
	int n,m,flag;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>str[i];
	}
	for(int i=0;i<n;i++){
		m=strlen(str[i]);
		s="";
		int count=0;
		for(int j=m-1;j>=0;j--){
			s+=str[i][j];
		}
		for(int l=0;l<n;l++){
			if(str[l]==s){
				flag=1;
				c=s;
				break;
			}
		}	
	}
	if(flag==1){
		cout<<c.length()<<" "<<c[c.length()/2];
	}
	return 0;
}
