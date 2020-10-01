#include<iostream>
using namespace std;

int main(){
	int a[20], even=0, odd=0, pos=0, neg=0, zero=0;
	cout<<"Enter 20 integers in the array: ";
	for(int i=0;i<20;i++){
		cin>>a[i];
	}
	for(int i=0;i<20;i++){
		if(a[i]>0){
			pos++;
		}else if(a[i]<0){
			neg++;
		}else{
			zero++;
		}
		if(a[i]%2==0){
			even++;
		}else{
			odd++;
		}
	}
	cout<<"\nEven: "<<even<<" "<<"Odd: "<<odd<<" "<<"Positive: "<<pos<<" "<<"Negative: "<<neg<<" "<<"Zero: "<<zero; 
	return 0;
}
