#include<iostream>
using namespace std;

int bubbleSort(int a[]){

	for(int i=0;i<10;i++){
		for(int j=0;j<10-i-1;j++){
			if(a[j]>a[j+1]){
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;	
			}
		}
	}
}
int selectionSort(int a[]){
	int min;
	for(int i=0;i<9;i++){
		min=i;
		for(int j=i+1;j<10;j++){
			if(a[j]<a[min]){
				min=j;
			}
		}
		if(min!=i){
			int temp=a[min];
			a[min]=a[i];
			a[i]=temp;
		}
	}
}
int insertionSort(int a[]){
	int key;
	int j=0;
	for(int i=0;i<10;i++){
		key=a[i];
		j=i-1;
		while(j>=0 && a[j]>key){
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=key;
	}
}
int merge(int a[],int l,int m,int r)
{	int i=l; //starting index for left subarray
	int j=m+1;	//starting index for right subarray
	int k=l;	//starting index for the merged array
	int temp[10];
	while(i<=m && j<=r){
		if(a[i]<=a[j])
		{
			temp[k]=a[i];
			i++;
			k++;
		}else
		{
			temp[k]=a[j];
			j++;
			k++;
		}
	}	
	while(i<=m){
		temp[k]=a[i];  //coping all elemnts from left to temp array
		k++;
		i++;
	}	
	while(j<=r){
		temp[k]=a[j];	//coping all elemnts from right to temp array
		k++;
		j++;
	}	
	for(int s=l;s<=r;s++){
		a[s]=temp[s];
	}
}
void mergeSort(int a[],int l,int r)
{
	if(l<r)  //to stop when element left is one
	{
		int m=(l+r)/2;
		mergeSort(a,l,m);
		mergeSort(a,m+1,r);
		merge(a,l,m,r);	
	}
}
int partition(int a[],int s,int e)
{
	int pivot=a[e];
	int pindex=s;
	for(int i=s;i<e;i++){
		if(a[i]<pivot){
			int temp=a[i];
			a[i]=a[pindex];
			a[pindex]=temp;
			pindex++;
		}
	}
	int temp=a[e];
	a[e]=a[pindex];
	a[pindex]=temp;
	return pindex;
}
int quickSort(int a[],int s,int e){
	if(s<e){
		int p=partition(a,s,e);
		quickSort(a,s,p-1); //recursive call for left 
		quickSort(a,p+1,e);	//recursive call for right
	}
}
int main(){
	int arr[10];
	cout<<"Enter the numbers in array: "<<endl;
	for(int i=0;i<10;i++){
		cin>>arr[i];
	}
	quickSort(arr,0,9);
	cout<<"Array after sorting is :"<<endl;
	for(int i=0;i<10;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
