#include<iostream>
using namespace std;
int perfect(int a){
	int sum=0;
	for(int i=1;i<a;i++){
		if(a%i==0){
			sum=sum+i;
		}
	}
	if(a==sum){
		cout<<a<<" ";
	}else{
		cout<<"";
	}
}
int main(){
	cout<<"Perfect numberss between 1 and 100 are: ";
	for(int i=1;i<=100;i++){
		perfect(i);
	}
	return 0;
}
