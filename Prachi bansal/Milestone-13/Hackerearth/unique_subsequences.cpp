#include<iostream>
using namespace std;
int main(){
	string s;
	int n,count,m;
	cin>>n;
	for(int i=0;i<n;i++){
		count=0;
		cin>>m;
		cin>>s;
		for(int j=0;j<m;j++){
			if(s[j]!=s[j+1]){
				count++;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
