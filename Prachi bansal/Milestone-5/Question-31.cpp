#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int x,n,d,a,z;
	cout<<"Enter the value of n: ";
	cin>>x;
	n=x;
	cout<<"\nArmstrong numbers are: ";
	for(int k=1;k<=x;k++){
		z=k;
		n=k;
		int sum=0,i=0;
		while(n!=0){ //for total digits
			d=n%10;
			n/=10;
			i++;		
		}
			
			while(z!=0){
				a=z%10;
				sum+=pow(a,i);
				z/=10;
			}
			if(k==sum){
				cout<<k<<" ";
			}
		
	}
	return 0;
}
