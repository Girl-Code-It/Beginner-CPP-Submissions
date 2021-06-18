#include<iostream>
using namespace std;
int main(){
	int arr[10], n, i, sum = 0, pro = 1;
	cout<<"Number of elements in array: ";
	cin>>n;
	cout<<"Enter elements of array: ";
	for(i=0; i<n; i++){
		cin>>arr[i];
	}
	
	for(i=0; i<n; i++){
		sum += arr[i];
		pro *= arr[i];
	}
	
	cout<<"sum of array: "<<sum<<endl;
	cout<<"product of array: "<<pro<<endl;
	return 0;
}
