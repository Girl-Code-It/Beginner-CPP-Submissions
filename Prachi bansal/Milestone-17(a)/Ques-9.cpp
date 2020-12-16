#include<iostream>
using namespace std;
string str;
string rev(string s,int i){
	if(i==0){
		return str+s[i];
	}
	str+=s[i];
	return rev(s,i-1);
}
int main(){
	string s;
	cout<<"Enter the string:";
	cin>>s;
	int n=s.length();
	string str=rev(s,n-1);
	cout<<"Reversed string is: "<<endl;
	cout<<str;
	return 0;
}
