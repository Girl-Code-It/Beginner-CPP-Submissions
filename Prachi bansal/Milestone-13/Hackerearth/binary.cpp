#include<iostream>
using namespace std;
int main(){
	string s,c;
	int n,m,count=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>m;
		cin>>s;
		count=0;
		for(int j=1;j<=m;j++){
			for(int k=0;k<=m-j;k++){
				int q=k+j-1;
				c="";
				for(int l=k;l<=q;l++){
					c+=s[l];
				}
				int b=c.length();
				if(b!=1){
					if(c[0]=='1' && c[b-1]=='1'){
						count++;
					}
				}
			}
		}
		cout<<count<<endl;
	}
	return 0; 
	
}
