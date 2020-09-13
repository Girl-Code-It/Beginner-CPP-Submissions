#include<iostream>
using namespace std;
int main(){
	int x,y,z;
	cout<<"Enter 1st for HCF: ";
	cin>>x;
	cout<<"\nEnter 2nd number for HCF: ";
	cin>>y;
	if(x>y){
	for(int i=1;i<=x;i++){
		if(x%i==0 && y%i==0){
				z=i;
			}
		}
	}else{
		for(int i=1;i<=y;i++){
		if(x%i==0 && y%i==0){
				z=i;
			}
		}
	}
	cout<<"\nHighest Common Factor is: "<<z;
	return 0;
}
