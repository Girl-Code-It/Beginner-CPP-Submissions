#include<iostream>
using namespace std;
string c;
string copy(string s,int i,int n){
	if(i==n){
		return c;
	}
	c+=s[i];
	return copy(s,i+1,n);
}
int main(){
	string s;
	cout<<"Enter the string: ";
	cin>>s;
	int n=s.length();
	string c=copy(s,0,n);
	cout<<"Original String is: "<<s<<endl;
	cout<<"Copied string is: "<<c;
	return 0;
}
