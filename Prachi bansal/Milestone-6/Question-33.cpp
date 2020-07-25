#include<iostream>
using namespace std;
int main(){
	int n,i=1;
	cout<<"Enter value of n: ";
	cin>>n;
	cout<<"\nPerfect numbers between 1 & "<<n<<" are: ";
	while(i<=n){
		int sum=0;
		for(int j=1;j<i;j++){
			if(i%j==0){
				sum+=j;
			}
		}
		if(i==sum){
				cout<<i<<" ";
		}
		i++;
		
	}
	return 0;
}
