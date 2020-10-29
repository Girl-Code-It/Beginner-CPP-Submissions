//Write a program to check if elements of an array are same or not it read from front or back
#include<iostream>
using namespace std;

int main(){
	int a[10],flag=0;
	cout<<"Enter integers in the array: ";
	for(int i=0;i<10;i++){
		cin>>a[i];
	}
	for(int i=0,k=9;i<5,k>=5;i++,k--){
		if(a[i]!=a[k]){
			flag=1;
		}
	}
	if(flag==1){
		cout<<"Not same";
	}else{
		cout<<"Same";
	}
	return 0;
}
