#include<iostream>
using namespace std;
int main(){
	string s,c,d;
	char ch;
	int n,count=0,j,temp;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s;
		d="";
		c="";
		int b[50];
		//removing duplicates
		for(j=0;j<s.length();j++){
			count=1;
			int pos=c.find(s[j]);
			if(pos==-1){
				c+=s[j];
			}
		}
		//counting the characters
		for(j=0;j<c.length();j++){
			count=0;
			for(int k=0;k<s.length();k++){
				if(c[j]==s[k]){
					count++;
				}
			}
			b[j]=count;
		}
		for(j=0;j<c.length();j++){
			for(int k=j+1;k<c.length();k++){
				if(b[j]>b[k]){
					temp=b[j];
					b[j]=b[k];
					b[k]=temp;
					ch=c[j];
					c[j]=c[k];
					c[k]=ch;
				}
			}
		}
		for(j=0;j<c.length();j++){
			for(int k=j+1;k<c.length();k++){
				if(b[j]==b[k] && c[j]>c[k]){
					ch=c[j];
					c[j]=c[k];
					c[k]=ch;
				}
			}
		}
		for(int k=0;k<c.length();k++){
			int q=0;
			while(q<b[k]){
				d+=c[k];
				q++;
			}
		}
		cout<<d<<endl;	
	}
	return 0;
}
