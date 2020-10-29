#include<iostream>
using namespace std;
int main(){
	int x;
	cout<<"Enter the value for multiplication table: ";
	cin>>x;
	for(int i=1;i<=10;i++){
		cout<<"\n"<<x<<" * "<<i<<" = "<<x*i;
	}
	return 0;
}
