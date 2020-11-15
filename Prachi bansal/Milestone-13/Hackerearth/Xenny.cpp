#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char str[1000][1000], temp[1000];
	int t,n,k,m;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n>>k>>m;
		for(int j=0;j<n;j++){
			cin>>str[j];
		}
		for(int j=0;j<n;j++){
			for(int l=j+1;l<n;l++){
				if(strcmp(str[j],str[l])>0){
					strcpy(temp,str[j]);
					strcpy(str[j],str[l]);
					strcpy(str[l],temp);
				}
			}
		}
		for(int j=0;j<n;j++){
			cout<<str[j]<<endl;
		}
		cout<<endl<<str[k-1]<<endl;
	}
	return 0;
}
