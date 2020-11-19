#include<iostream>
using namespace std;
int main(){
	char str[80];
	int n,v=0,k;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>str;
		v=0;
		for(k=0;str[k]!='\0';k++){
			switch(str[k]){
				case 'a': v++;
				break;
				case 'e': v++;
				break;
				case 'i': v++;
				break;
				case 'o': v++;
				break;
				case 'u': v++;
				break;
				default:
				break;
			}
		}
		cout<<v;
	}
	return 0;
}
