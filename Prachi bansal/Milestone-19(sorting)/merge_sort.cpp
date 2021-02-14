//merge sort tim complexity is: O(nlogn)
//in this we divide the array in left and right sub array until
//we get a single element compare the left and right and the smaller is
//filled in the array just above
#include<iostream>
using namespace std;
int merge(int left[],int right[],int a[],int nl,int nr){
	int i=0,j=0,k=0;
	while(i<nl && j<nr){
		if(left[i]<right[j]){
			a[k]=left[i];
			i=i+1;
		}else{
			a[k]=right[j];
			j=j+1;
		}
		k=k+1;
	}
	while(i<nl){
		a[k]=left[i];
		i=i+1;
		k=k+1;
	}
	while(j<nr){
		a[k]=right[j];
		j=j+1;
		k=k+1;
	}
	return 0;
}
int mergesort(int a[],int n){
	if(n<2) {
		return 0;
	}
	int mid = n/2;
	int left[mid],right[n-mid];
	for(int i=0;i<mid;i++){
		left[i]=a[i];	
	}
	for(int i=mid;i<n;i++){
		right[i-mid]=a[i];
	}
	mergesort(left,mid);
	mergesort(right,n-mid);
	merge(left,right,a,mid,n-mid);
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	mergesort(a,n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}

