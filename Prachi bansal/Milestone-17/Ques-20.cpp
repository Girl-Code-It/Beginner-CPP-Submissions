#include<iostream>
using namespace std;
char caps(string s,int i){
	if(s[i]>=66 && s[i]<=99){
		return s[i];
	}
	return caps(s,i+1);
}
int main(){
	string s;
	cout<<"Enter the string: ";
	cin>>s;
	char ch=caps(s,0);
	cout<<"The first capital letter is: "<<ch;
	return 0;
}
