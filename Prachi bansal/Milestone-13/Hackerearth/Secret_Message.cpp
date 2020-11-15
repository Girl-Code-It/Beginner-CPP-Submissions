#include<iostream>
using namespace std;
int main(){
	int n,m,count=0,l,q[20];
	string s;
	cin>>n;
	getchar();
	for(int i=0;i<n;i++){
		cin>>l>>m;
		getchar();
		getline(cin,s);
		for(int j=0;j<l;j++){
			if((s[j]>='A' && s[j]<='Z')){
				int temp=s[j]-'A';
				temp+=m;
				temp=temp%26;
				s[j]=('A'+temp);
			}
			else if((s[j]>='a' && s[j]<='z')){
				int temp=s[j]-'a';
				temp+=m;
				temp=temp%26;
				s[j]=('a'+temp);
			}else if((s[j]>='0' && s[j]<='9')){
				int temp=s[j];
				temp+=m;
				temp=temp%10;
				s[j]=(temp);
			}
		}
		cout<<s<<endl;
	}
	return 0;
}
