//find sum of all natural numbers between 1 and n.
#include<iostream>
using namespace std;
int main(){
	int n, sum=0;
	cout<<" Enter value of n: ";
	cin>>n;
	for(int i=0; i<=n; i++){
		sum += i;
		}
		
		cout<<"Sum of 1st na natural numbers is: "<<sum<<endl;
		return 0;
}
