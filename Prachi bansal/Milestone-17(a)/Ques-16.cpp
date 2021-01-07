#include<iostream>
using namespace std;
bool pallin(string s,int i,int j,int n){
	if(i==n/2){
		if(s[i]==s[j]){
			return true;
		}
		return false;
	}
	if(s[i]!=s[j]){
		return false;
	}
	return pallin(s,i+1,j-1,n);
}
int main(){
	string s;
	int n;
	cout<<"Enter the string: ";
	cin>>s;
	n=s.length();
	if(pallin(s,0,n-1,n)==true){
		cout<<"Pallindrome";
	}else{
		cout<<"Not Pallindrome";
	}
	return 0;
}

