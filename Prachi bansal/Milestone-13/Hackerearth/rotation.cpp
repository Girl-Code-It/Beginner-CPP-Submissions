#include<iostream>
using namespace std;
int main(){
	string s,t;
	int n,count=0,flag;
	cin>>n;
	cin>>s;
	cin>>t;
	if(s==t){
		cout<<0;
	}else{
		for(int i=0;i<n;i++){
			if(s[i]==t[0]){
				flag=1;
				for(int j=i,k=0;j<n;j++,k++){
					if(s[j]!=t[k]){
						flag=0;
						break;
					}
				}
			}
			if(flag==1){
				cout<<i;
				break;
			}
		} 
	}
	return 0;
}
