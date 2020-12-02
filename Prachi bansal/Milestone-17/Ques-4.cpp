#include<iostream>
using namespace std;
int print (int a[],int n,int i){
	if(i==n-1){
		cout<<a[i]<<" ";
		return 0;
	}
	cout<<a[i]<<" ";
	return print(a,n,i+1);
}
int main(){
	int a[100],n;
	cout<<"Input the number of elements to be stored in the array: ";
	cin>>n;
	cout<<"Input elements in the array : "<<endl;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"Elements in array are: "<<endl;
	print(a,n,0);
	return 0;
}
