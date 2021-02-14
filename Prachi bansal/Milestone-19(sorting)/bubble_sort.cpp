//Bubble sort time complexity: O(n^2)
//in this the number are compared if the element at 0 is greater than 
//elememt at 1 then both are swapped now element at 1 and 2 are comapred
//if 2nd element is smaller then swapped and so on 2,3 are compared..
//the flag statement is used to check if the array is sorted earlier then do not 
//loop further 
#include<iostream>
using namespace std;
int bubblesort(int a[],int n){
	int temp,k;
	for(int i=1;i<n;i++){
		int flag=false;
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				flag=true;
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
		if(flag==false){
			k=i;
			break;
		}
	}
	return k;
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int k=bubblesort(a,n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
