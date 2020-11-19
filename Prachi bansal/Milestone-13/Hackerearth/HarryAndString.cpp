#include<iostream>
using namespace std;
int isSort(int a[],int m){
	for(int j=0;j<m;j++){
		if(a[j]>a[j+1]){
			return false;
		}else if(a[j]<a[j+1]){
			return true;
		}
	}
}
int main(){
	string s,c;
	int n,j,a[10];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s;
		c="";
		a[10];
		for(j=0;j<s.length();j++){
			if(s[j]=='a' || s[j]=='e' ||s[j]=='i' ||s[j]=='o' ||s[j]=='u'){
				c+=s[j];
			}
		}
		for(j=0;j<c.length();j++){
				a[j]=c[j];
		}
		for(j=0;j<c.length();j++){
			cout<<a[j]<<" ";
		}
		cout<<endl;
		for(j=0;j<c.length();j++){
			cout<<c[j]<<" ";
		}
		if(c.length()==0 || c.length()==1){
			cout<<"Good"<<endl;
		}else{
			for(j=0;j<c.length();j++){
				a[j]=c[j];
			}
			
			int flag=isSort(a,c.length());
			
			if(flag==true){
				cout<<"Good"<<endl;
			}else if(flag==false){
				cout<<"Worst"<<endl;
			}
		}
	}
	return 0;
}
