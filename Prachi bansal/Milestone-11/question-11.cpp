#include<iostream>
using namespace std;
int main(){
	int a[10], n,m;
	cout<<"enter the integers in the array: "<<endl;
	for(int i=0;i<10;i++){
		cin>>a[i];
	}
	cout<<"enter the starting index value: "<<endl;
	cin>>n;
	cout<<"enter the ending index value: "<<endl;
	cin>>m;
	cout<<"the array is: "<<endl;
	for(int i=n;i<=m;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}

