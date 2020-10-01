#include<iostream>
#include<math.h>
using namespace std;
int armstrong (int x, int y){
	int d,i=0,n,b,sum=0;
	for(int j=x;j<=y;j++){
		n=j;
		b=j;
		i=0;
		sum=0;
		while(n!=0){
			d=n%10;
			n=n/10;
			i++;
		}
		while(b!=0){
			d=b%10;
			sum=sum+pow(d,i);
			b=b/10;
		}
		if(sum==j){ 
			cout<<j<<" ";
		}
	}
}
main(){
	int a,b;
	cout<<"Enter the range: ";
	cin>>a>>b;
	cout<<"\nArmstrong numbers are: ";
	armstrong(a,b);
}
