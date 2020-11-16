#include<iostream>
using namespace std;
int main(){
	string s,c;
	int n,k,q;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s;
		c=s;
		int m=s.length();
		if(m%2!=0){
			k=m/2;
			q=(m/2)-1;
			for(int j=1,q=(m/2)-1;j<m,q>=0;j+=2,q--){
				c[q]=s[j];
			}
			for(int j=0,k=m/2;j<m,k<m;j+=2,k++){
				c[k]=s[j];
			}
			cout<<c<<endl;
		}else{
			k=(m/2)-1;
			q=m/2;
			for(int j=1,q=m/2;j<m,q<m;j+=2,q++){
				c[q]=s[j];
			}
			for(int j=0,k=(m/2)-1;j<m,k>=0;j+=2,k--){
				c[k]=s[j];
			}
			cout<<c<<endl;
		}
	}
	return 0;
}
