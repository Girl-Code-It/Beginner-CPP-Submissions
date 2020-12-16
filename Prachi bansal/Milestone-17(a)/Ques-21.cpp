#include<iostream>
using namespace std;
int binary(int a[],int start,int end,int x){
	int mid=start+((end-start)/2);
	if(start<=end){
		if(a[mid]==x){
			return mid;
		}
		if(a[mid]>x){
			return binary(a,start,mid-1,x);
		}else{
			return binary(a,mid+1,end,x);
		}	
	}
	return -1;
}
int main(){
	int n,x;
	cout<<"Enter the number of elements: ";
	cin>>n;
	int a[n];
	cout<<"Enter the array elememts: ";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"Element to be searched: ";
	cin>>x;
	int index=binary(a,0,n-1,x);
	if(index==-1){
		cout<<"Element not found";
	}else{
		cout<<"Element found at: "<<index+1;	
	}
	return 0;
}
