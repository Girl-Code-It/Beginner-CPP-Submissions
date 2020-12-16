#include<iostream>
using namespace std;
int sum=0;
int summ(int n){
	if(n==1){
		return sum+1;
	}
	sum+=n;
	return summ(n-1);
}
int main(){
	int n;
	cout<<"Input number of the range starting from 1 : ";
	cin>>n;
	cout<<"The sum of numbers from 1 to "<<n<<" : "<<endl;
	int sum=summ(n);
	cout<<sum;
	return 0;
	
}
