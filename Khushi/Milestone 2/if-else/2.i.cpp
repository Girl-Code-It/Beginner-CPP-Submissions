//Print multiplication table 
#include<iostream>
using namespace std;
int main(){
	int i, n;
	cout<<"Enter number to print table: ";
	cin>>n;
	cout<<"Multiplication table: "<<endl;
	for(i=0; i<=10; i++){
		cout<<n<<" * "<<i<<" "<<" = "<<n*i<<endl;
	}
	
	return 0;
}
