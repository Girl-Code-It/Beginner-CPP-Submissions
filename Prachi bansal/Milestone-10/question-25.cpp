#include<iostream>
using namespace std;
int perfect (int x, int y){
	int d,n,b,sum=0;
	for(int j=x;j<=y;j++){
		sum=0;
		for(int i=1;i<=j/2;i++){
			if(j%i==0){
				sum=sum+i;
			}
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
	cout<<"\nPerfect numbers are: ";
	perfect(a,b);
}
