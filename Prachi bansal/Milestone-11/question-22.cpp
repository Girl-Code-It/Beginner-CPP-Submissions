//max and min
#include<iostream>
using namespace std;

int main(){
	int a[20],m,max,min;
	cout<<"Enter the size: ";
	cin>>m;
	cout<<"Enter array: ";
	for(int i=0;i<m;i++){
		cin>>a[i];
	}
	max=a[0];
	min=a[1];
	for(int i=0;i<m;i++){
		if(max<a[i]){
		max=a[i];
		}
		if(min>a[i]){
		min=a[i];
		}
	}
	cout<<"The max value is: "<<max;
	cout<<"\nThe min value is: "<<min;
	return 0;
}
