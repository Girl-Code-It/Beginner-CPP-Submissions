//number of duplicate elements
#include<iostream>
using namespace std;
int main(){
	int a[20],count=0,n;
	cout<<"Enter the size: ";
	cin>>n;
	cout<<"Enter the elememts: ";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]==a[j]){
				count++;
				break;
			}
		}
	}
	cout<<"Total duplicated elements are: "<<count;
	return 0;
}
