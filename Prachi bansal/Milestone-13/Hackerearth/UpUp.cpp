#include<iostream>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	for(int i=0;i<s.length();i++){
		if(islower(s[0])){
			s[0]=toupper(s[0]);
		}
		if(s[i]==(char)(32) && islower(s[i+1])){
			s[i+1]=toupper(s[i+1]);
		}
	}
	cout<<s;
	return 0;
}
