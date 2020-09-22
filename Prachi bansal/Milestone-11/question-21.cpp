//sum of array elements
#include<iostream>
using namespace std;

int main(){
	int ar[10],m,sum=0;
	cout<<"enter the size of array: ";
	cin>>m;
	cout<<"enter the array: ";
	for(int i=0;i<m;i++){
		cin>>ar[i];
		sum+=ar[i];
	}
	cout<<"sum is: "<<sum;
	return 0;
}
