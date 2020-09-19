//print negative numbers
#include<iostream>
using namespace std;
int main(){
	int a[10];
	cout<<"enter the array: ";
	for(int i=0;i<10;i++){
		cin>>a[i];
	}
	cout<<"Negative numbers are: ";
	for(int i=0;i<10;i++){
		if(a[i]<0){
			cout<<a[i];
		}else{
			cout<<"";
		}
	}
	return 0;
}
