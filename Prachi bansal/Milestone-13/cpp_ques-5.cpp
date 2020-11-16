#include<iostream>
#include<string>
using namespace std;
int main(){
	string s1,s2,s3;
	cout<<"Enter stirng 1: ";
	cin>>s1;
	cout<<"Enter stirng 2: ";
	cin>>s2;
	if(s1==s2){
		cout<<endl<<"Strings are equal";
	}else{
		cout<<endl<<"Strings are not equal";
	}
	return 0;
}
