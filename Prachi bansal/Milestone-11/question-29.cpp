//frequency of each element in array
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
	cout<<"\nFrequency of each count is: "<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i]==a[j]){
				count++;
			}
			
		}
		cout<<"Frequency of "<<a[i]<<" : "<<count<<endl;
		count=0;
	}
	return 0;
}
