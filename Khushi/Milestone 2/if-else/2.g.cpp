//find sum of all even numbers between 1 and 10.
#include<iostream>
using namespace std;
int main(){
	int n, sum=0;
	cout<<"Enter value of n: ";
	cin>>n;
	for(int i=0; i<=n; i++){
		if(i%2==0){
			sum += i;
		}
	}
	
	cout<<"Sum of all even numbers between 1 and n is: "<<sum<<endl;
	
	return 0;
}
