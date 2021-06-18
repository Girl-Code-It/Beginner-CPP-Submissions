//quick sort
#include<iostream>
using namespace std;
int partition(int a[],int start,int end){
	int pivot = a[end];
	int pIndex=start;
	for(int i=start;i<end;i++){
		if(a[i]<=pivot){
			swap(a[i],a[pIndex]);
			pIndex++;
		}
	}
	swap(a[pIndex],a[end]);
	return pIndex;
}
int quickSort(int a[],int start,int end){
	if(start<end){
		int pIndex=partition(a,start,end);
		quickSort(a,start,pIndex-1);
		quickSort(a,pIndex+1,end);
	}
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	quickSort(a,0,n-1);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
