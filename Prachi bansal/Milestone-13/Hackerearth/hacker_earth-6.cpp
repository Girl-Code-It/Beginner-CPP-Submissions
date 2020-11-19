#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char str[20];
	int n,flag=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>str;
		int l=strlen(str);
		for(int k=0;k<l-1;k++){
			if((str[k]-str[k+1])==-1 ||(str[k]-str[k+1])==1||(str[k]-str[k+1])==25||(str[k]-str[k+1])==-25){
				flag=1;
			}else{
				flag=0;
				break;
			}
		}
		if(flag==1){
			cout<<endl<<"YES";
		}else{
			cout<<endl<<"NO";
		}
	}
	return 0;
}
