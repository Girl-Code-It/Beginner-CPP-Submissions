#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,key,flag=0;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cin>>key;
	for(int i=0;i<n;i++){
		if(key==arr[i]){
			cout<<key<<" is present in array"<<endl;
			flag=1;
			break;
		}
	}
	if(flag==0){
		cout<<key<<" is not present in array"<<endl;
	}
	return 0;
}