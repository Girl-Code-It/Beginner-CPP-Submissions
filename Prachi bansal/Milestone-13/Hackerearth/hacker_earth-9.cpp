#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char str1[80],str2[80],str3[80];
	int p;
	int k=1;
	cin>>str1;
	cin>>str2;
	while(p!=0){
		for(int i=0;str1[i]!='\0';i++){
			str3[i]=str1[i]+k;
		}
		p=strcmp(str3,str2);
		k++;
	}
	return 0;
}
