//find second largest number in array
#include<iostream>
using namespace std;
int main(){
	int ar[20],m;
	cout<<"enter the size of array: ";
	cin>>m;
	cout<<"enter the array: ";
	for(int i=0;i<m;i++){
		cin>>ar[i];
	}
	int max=ar[0],max2=ar[0];
	for(int i=0;i<m;i++){
		if(max<ar[i]){
			max2=max;
			max=ar[i];
		}else{
			max2=ar[i];
		}
	}
	cout<<"Max number is: "<<max2;
	return 0;
}
