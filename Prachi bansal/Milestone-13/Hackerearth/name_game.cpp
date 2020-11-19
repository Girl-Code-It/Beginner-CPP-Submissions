#include<iostream>
#include<math.h>
using namespace std;
int main(){
	string s,c;
	int n,k,j,m,l,q;
	int ar[]={67,71,73,79,83,89};
	int arr[]={97,101,103,107,109,113};
	int b[]={89,97};
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>q;
		cin>>s;
		c="";
		for(j=0;j<q;j++){
			int a[6]={};
			if(isupper(s[j]) || (s[j]>=33 && s[j]<=64)){
				for(k=0;k<6;k++){
					a[k]=abs(ar[k]-s[j]);	
				}
				m=a[0];
				for(k=1;k<6;k++){
					if(m>a[k]){
						m=a[k];
					}
				}
				for(k=0;k<6;k++){
					if(a[k]==m){
						l=k;
						break;
					}
				}
				c+=(char)(ar[l]);	
			}else if(islower(s[j]) || (s[j]>=123 && s[j]<=126)){
				for(k=0;k<6;k++){
					a[k]=abs(arr[k]-s[j]);	
				}
				m=a[0];
				for(k=1;k<6;k++){
					if(m>a[k]){ 
						m=a[k];
					}
				}
				for(k=0;k<6;k++){
					if(a[k]==m){
						l=k;
						break;
					}
				}
				c+=(char)(arr[l]);	
			}else if(s[j]>=91 && s[j]<=96){
				for(k=0;k<6;k++){
					a[k]=abs(b[k]-s[j]);	
				}
				m=a[0];
				for(k=1;k<6;k++){
					if(m>a[k]){
						m=a[k];
					}
				}
				for(k=0;k<6;k++){
					if(a[k]==m){
						l=k;
						break;
					}
				}
				c+=(char)(b[l]);
			}
		}
		cout<<c<<endl;
	}
	return 0;
}
