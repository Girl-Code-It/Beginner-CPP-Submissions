#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char s[10000][101],a[10000][101];
	string c,d;
	int n,count,k;
	cin>>n;
	count=n;
	for(int i=0;i<=n;i++){
		gets(s[i]);
	}
	for(int i=0;i<=n;i++){
		int m=strlen(s[i]);
		int k=0;
		c="";
		while(k<m-3){
			c+=s[i][k];
			k++;
		}
		cout<<c<<endl;
		for(int j=0;j<c.length();j++){
			a[i][j]=c[j];
		}
	}
	for(int i=0;i<=n;i++){
		cout<<a[i]<<endl;
	}
	return 0;
}
