#include<iostream>
using namespace std;
int main(){
	string s,c;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s;
		int m=s.length();
		c="";
		for(int j=m-1;j>=0;j--){
			c+=s[j];
		}
		cout<<c;
		cout<<endl;	
	}
	return 0;
}
