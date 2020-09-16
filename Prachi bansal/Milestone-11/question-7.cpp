//largest and smallest element 
#include<iostream>
using namespace std;

int main(){
	int a[50],largest, smallest,n;
	cout<<"Enter the size of array: ";
	cin>>n;
	cout<<"Enter integers in the array: ";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	largest=a[0];
	smallest=a[0];
	for(int i=0;i<n;i++){
		if(largest<a[i]){
			largest=a[i];
		}
		if(smallest>a[i]){
			smallest=a[i];
		}
	}
	cout<<"Largest: "<<largest<<" "<<"Smallest: "<<smallest;
	return 0;
}
