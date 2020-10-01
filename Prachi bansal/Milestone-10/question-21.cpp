#include<iostream>
#include<math.h>
using namespace std;
int prime(int x){
	if(x==1){
		cout<<"Neither prime nor composite"<<endl;
	}else{
	int isPrime=0;
		for(int i=2;i<=x/2;i++){
			if(x%i==0){
				isPrime=1;
			}
		}
		if(isPrime==0){
			cout<<"Prime"<<endl;
		}else{
			cout<<"Not Prime"<<endl;
		}
	}
}

int armstrong (int x){
	int d,i=0,n,b,sum=0;
	n=x;
	b=x;
	while(n!=0){
		d=n%10;
		n=n/10;
		i++;
	}
	while(x!=0){
		d=x%10;
		sum=sum+pow(d,i);
		x=x/10;
	}
	if(sum==b){ 
		cout<<"Armstrong"<<endl;
	}else{
		cout<<"Not Armstrong"<<endl;
	}
}
int perfect(int x){
	int sum=0;
	for(int i=1;i<=x/2;i++){
		if(x%i==0){
			sum=sum+i;
		}else{
		}
	}
	if(sum==x){
		cout<<"Perfect number"<<endl;
	}else{
		cout<<"Not Perfect"<<endl;
	}
}
main(){
	int a;
	cout<<"Enter the number: ";
	cin>>a;
	prime(a);
	armstrong(a);
	perfect(a);
}
