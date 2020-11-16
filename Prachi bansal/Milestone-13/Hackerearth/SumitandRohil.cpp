#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char s[100][100];
	int n,count=1;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
	for(int i=0;i<n;i++){
		int k=i+1;
		int m=strlen(s[i]);
		count=0;
		while(k<n){
			if(s[i][0]==s[k][0] && s[i][m-1]==s[k][m-1]){
				count++;	
			}
			k++;
		}
		cout<<count<<endl;
	}
	return 0;
}
