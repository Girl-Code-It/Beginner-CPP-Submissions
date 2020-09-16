//even and odd in diff array
#include<iostream>
using namespace std;
int main(){
	int a[10],n,e[10],o[10],ee=0,oo=0;
	cout<<"Enter the size: ";
	cin>>n;
	cout<<"Enter the elememts: ";
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]%2==0){
			e[ee]=a[i];
			ee++;
		}else{
			o[oo]=a[i];
			oo++;
		}
	}
	cout<<"\nEven array: ";
	for(int i=0;i<ee;i++){
		cout<<e[i]<<" ";
	}
	cout<<"\nOdd array: ";
	for(int i=0;i<oo;i++){
		cout<<o[i]<<" ";
	}
	return 0;
}
