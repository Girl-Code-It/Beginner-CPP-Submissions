#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main(){
	int n;
	string str;
	cin>>n;
	for(int i=0;i<=n;i++){
		getline(cin,str);
		for(int j=0;str[j]!='\0';j++){
			if(islower(str[j])){
				cout<<str[j]-96;
			}else if(isupper(str[j])){
				cout<<str[j]-64;
			}else if(str[j]==(char)(32)){
				cout<<(char)(36);
			}
		}
		cout<<endl;
	}
	return 0;
}
