#include<iostream>
using namespace std;
int main(){
	string s,str;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>str;
		s="";
		for(int k=0;k<str.length();k++){
			int pos=s.find(str[k]);
			if(pos==-1){
				s+=str[k];
			}
		}
		cout<<s<<endl;
	}
	return 0;
}
