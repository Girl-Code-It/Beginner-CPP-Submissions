#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char str[80],str2[20],temp;
	int m;
	cin>>m;
	for(int k=0;k<m;k++){
		cin>>str;
		strcpy(str2,str);
		int l=strlen(str);
		for(int i = 0, j = l - 1; i < l/2; i++, j--)
    	{
        	temp = str[i];
        	str[i] = str[j];
        	str[j] = temp;		
    	}
		if(strcmp(str,str2)){
			cout<<"NO";
		}else{
			cout<<"YES";
		}
		cout<<endl;
	}
	return 0;
}
