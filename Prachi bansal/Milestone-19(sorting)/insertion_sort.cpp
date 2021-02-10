//insertion sort time complexity: O(n) (Best case)
//time complexity: O(n^2) (average case) 
//time complexity: O(n^2) (worst case)
//in this we compare 0 and 1 elements and swap then comapre 1 and 2 and swap
//then again the element at 1 and 0 is compared and swap if needed and so on...

#include<iostream>
using namespace std;
void insertionsort(int a[],int n){
	int temp;
	for(int i=1;i<n;i++){
		int temp=a[i];
		int j=i-1;
		while(j>=0 && a[j]>temp){
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=temp;
	}
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	insertionsort(a,n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
