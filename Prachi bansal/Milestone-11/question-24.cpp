//count total number of even and odd elements
#include<iostream>
using namespace std;
int main(){
	int ar[20],m,e=0,o=0;
	cout<<"enter the size of array: ";
	cin>>m;
	cout<<"enter the array: ";
	for(int i=0;i<m;i++){
		cin>>ar[i];
		if(ar[i]%2==0){
			e++;
		}else{
			o++;
		}
	}
	cout<<"Even: "<<e;
	cout<<"\nOdd: "<<o;
	return 0;
}
