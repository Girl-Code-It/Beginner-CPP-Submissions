#include<iostream>
#include<limits.h>
using namespace std;
int main(){
	string s,x="",d;
	int k,l;
	char m;
	cin>>s;
	cin>>k;
	d=s;
	int q=0;
	while(q<s.length()){
		m=d[0];
		if(k>d.length()){
			k=d.length();
		}
		for(int i=0;i<k;i++){
			if(d[i]<=m){
				m=d[i];
				l=i;
			}
		}
		x+=m;
		string c="";
		for(int j=0;j<k;j++){
			if(j==l){
				continue;
			}else{
				c+=d[j];
			}
		}
		for(int n=k;n<d.length();n++){
			c+=d[n];
		}
		d=c;
		q++;
	}
	cout<<x;
	return 0;
}
