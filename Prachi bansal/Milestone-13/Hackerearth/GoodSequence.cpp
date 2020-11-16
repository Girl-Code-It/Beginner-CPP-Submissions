#include<iostream>
using namespace std;
int main(){
	string s,c;
	int n,result;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s;
		c="";
		for(int j=0;j<s.length();j++){
			int pos=c.find(s[j]);
			if(pos==-1){
				c+=s[j];
			}
		}
		int m=c.length();
		if(m==1){
			cout<<s.length()<<endl;
		}else if(m==s.length()){
			cout<<1<<endl;
		}else{
			result=1;
			for(int j=0;j<m;j++){
				int count=0;
				for(int k=0;k<s.length();k++){
					if(c[j]==s[k]){
						count++;
					}
				}
				result*=count;
			}
			cout<<result<<endl;
		}
	}
	return 0;
}
