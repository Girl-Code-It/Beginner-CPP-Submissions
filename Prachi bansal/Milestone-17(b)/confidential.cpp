#include<iostream>
using namespace std;

void words(string s,int start,int end){
	if(start<=end){
		int mid=start+(end-start)/2;
		cout<<s[mid];
		words(s,start,mid-1);
		words(s,mid+1,end);	
	}
}
int main(){
	string s;
	int n,t;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n;
		cin>>s;
		words(s,0,n-1);
		cout<<endl;
	}
	return 0;
}
