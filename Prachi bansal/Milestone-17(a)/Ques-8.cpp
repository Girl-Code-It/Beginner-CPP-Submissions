#include<iostream>
using namespace std;
int g=INT_MIN;
int maximum(int x[],int i,int n){
	if(i==n-1){
		return g;
	}
	if(g<x[i]){
		g=x[i];
	}
	return maximum(x,i+1,n);
}
int main(){
	int n;
	cout<<"Enter the number of elements: "<<endl;
	cin>>n;
	int x[n];
	cout<<"Enter the elements :"<<endl;
	for(int i=0;i<n;i++){
		cin>>x[i];
	}
	int m=maximum(x,0,n);
	cout<<"Maximum element is: "<<m;
	return 0;
}
