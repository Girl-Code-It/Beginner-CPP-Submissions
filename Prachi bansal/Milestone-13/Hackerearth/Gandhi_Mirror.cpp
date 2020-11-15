#include<iostream>
using namespace std;
int main(){
	string s,c;
	char temp;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s;
		int m=s.length();
		c=s;
		if(s.find('2')!=-1 || s.find('3')!=-1 || s.find('4')!=-1 || s.find('5')!=-1 || s.find('6')!=-1|| s.find('7')!=-1 || s.find('9')!=-1){
			cout<<"NO"<<endl;
		}else{
			for(int j=0,k=m-1;j<m/2;j++,k--){
				temp=s[j];
				s[j]=s[k];
				s[k]=temp;
			}
			if(s==c){
				cout<<"YES"<<endl;
			}else{
				cout<<"NO"<<endl;
			}
		}
	}
	return 0;
}
