#include<iostream>
using namespace std;
int main(){
	int n,count=0,l=0,m=1;
	string s,c;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s;
		m=1;
		c="";
		if(s.find('_')!=-1){
			for(int j=0;j<s.length();j++){
				if(s[j]=='_'){
					l=0;
					c="";
					while(l<j){
						if(s[l]=='a'|| s[l]=='e'|| s[l]=='i'|| s[l]=='o'||s[l]=='u'){
							int pos=c.find(s[l]);
							if(pos!=-1){
								c+=s[l];
							}	
						}
						l++;
					}
					m=m*(c.length());
				}	
			}
			cout<<m;
		}else{
			cout<<1;
		}
        cout<<endl;
	}
	return 0;
}
