#include<iostream>
using namespace std;
int main(){
	string s;
	while(getline(cin,s)){
		string c="";
		for(int i=0;i<s.length();i++){
			if(s[i]=='/' && s[i+1]=='/'){
				for(int j=i;s[j]!='\0';j++){
					c+=s[j];
				}
				break;
			}
			else if(s[i]=='-'&& s[i+1]=='>'){
				c=c+'.';
				i++;
			}else{
				c=c+s[i];
			}
		}
		cout<<c<<endl;
	}
	return 0;
}
