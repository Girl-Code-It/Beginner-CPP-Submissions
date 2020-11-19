#include<iostream>
using namespace std;
int main(){
	string s,c;
	cin>>s;
	for(int i=0;i<s.length();i++){
		int pos=c.find(s[i]);
		if(pos==-1){
			c+=s[i];
		}
	}
	cout<<c;
	return 0;
}
