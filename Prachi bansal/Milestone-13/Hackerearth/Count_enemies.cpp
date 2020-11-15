#include<iostream>
using namespace std;
int main(){
	string s,c;
	int n,count,j=0,k,m,l;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s;
		count=0;
		k=0;
		l=0;
		j=0;
		m=s.length();
		while(j<m){
			c="";
			if(s[j]=='X'){
				for(j=j;s[j]!='\0';j++){
					if(s[j]=='*'){
						break;
					}
					count;
				}
			}else if(s[j]=='O'){
				for(j=j;s[j]!='\0';j++){
					if(s[j]=='*'){
						break;
					}else{
						c+=s[j];
						l++;	
					}
				}
				int pos=c.find('X');
				if(pos==-1){
					count+=c.length();
				}else{
					count;
				}
			}
			j++;
		}
		cout<<count<<endl;
	}
	return 0;
}
