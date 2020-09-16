//count total number of negative elements
#include<iostream>
using namespace std;
int main(){
	int ar[20],m,n=0;
	cout<<"enter the size of array: ";
	cin>>m;
	cout<<"enter the array: ";
	for(int i=0;i<m;i++){
		cin>>ar[i];
		if(ar[i]<0){
			n++;
		}
	}
	cout<<"Negative: "<<n;
	return 0;
}
