#include<iostream>
using namespace std;
int print(int n){
	if(n==1){
		cout<<1<<" ";
		return 0;
	}
	print(n-1);
	cout<<n<<" ";
}
int main(){
	int n;
	cin>>n;
	cout<<"The natural numbers are: ";
	print(n);
	return 0;
}
