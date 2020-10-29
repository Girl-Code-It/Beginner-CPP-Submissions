#include<iostream>
using namespace std;
inline int table(int x,int a=15){
	for(int i=1;i<=x;i++){
		cout<<"15 X "<<i<<" = "<<15*i<<endl;
	}
}
main(){
	int a;
	cout<<"Enter the number till where you want the table of 15: ";
	cin>>a;
	table(a);
}
