#include<iostream>
#include<limits.h>
using namespace std;
int main(){
	long long n,k=0,z=0,o=0,max=INT_MIN;
	cin>>n;
	string s;
	cin>>s;
	while(k<n){
		for(int i=k;i<n;i++){
			z=0;o=0;
			for(int j=k;j<=i;j++){
				if(s[j]=='0'){
					z++;
				}else{
					o++;
				}
			}
			if(z>o){
				if((z+o)>max){
					max=z+o;
				}
			}
		}
		k++;	
	}
	cout<<max;
	return 0;
}
