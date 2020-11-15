#include<iostream>
using namespace std;
int main(){
	string s,c;
	int n,flag=0,p;
	cin>>s;
	n=s.length();
	for(int i=1;i<=n;i++){
		for(int j=0;j<=n-i;j++){
			int m=i+j-1;
			c="";
			flag=0;
			for(int q=j;q<=m;q++){
				c+=s[q];
			}
			int l=0,k=c.length()-1;
			while(k>l){
				if(c[l++]!=c[k--]){
					flag=1;
				}
			}
			if(flag==1){
				p=c.length();
			}
		}
	}
	cout<<p;
	return 0;
}

