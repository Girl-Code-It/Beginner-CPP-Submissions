#include<iostream>
using namespace std;
int main(){
	string c,d,s;
	int n;
	cin>>n;
	getchar();
	for(int i=0;i<n;i++){
		getline(cin,s);
		c="";
		d="";
		int m=0;
		m=s.length();
		int g=0;
		for(int j=m-1;j>=0;j--){
			d+=s[j];
		}
		cout<<d<<endl;
		for(int k=0;k<=m;k++){
			if(d[k]==(char)(32) || d[k]=='\0'){
				int l=k;
				l--;
				while(l>=g){
					c+=d[l];
					l--;
				}
				g=k+1;
				c+=" ";
			}	
		}
		cout<<c<<endl;
	}
	return 0;
}
