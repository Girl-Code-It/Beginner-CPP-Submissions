#include<iostream>
#include<ctype.h>
using namespace std;
int main(){
	string s;
	int n,lower,upper;
	cin>>n;
	if(n>=11 || n<0){
		cout<<"Invalid Test";
		exit(0);
	}
	for(int i=0;i<n;i++){
		cin>>s;
		if(s.length()>100){
			cout<<"Invalid Input";
		}else{
			lower=0,upper=0;
			int count=0;
			for(int j=0;j<s.length();j++){
				if(islower(s[j])){
					lower++;
				}else if(isupper(s[j])){
					upper++;
				}
			}
			for(int j=0;j<s.length();j++){
				if((s[j]>=65 && s[j]<=90) || (s[j]>=97 && s[j]<=122)){
					count++;
				}
			}
			int val= (lower>upper) ? upper : lower;
			if(count==0){
				cout<<"Invalid Input"<<endl;
			}else if(count==1){
				cout<<0<<endl;
			}else{
				cout<<val<<endl;
			}
		}
	}
	return 0;
}
