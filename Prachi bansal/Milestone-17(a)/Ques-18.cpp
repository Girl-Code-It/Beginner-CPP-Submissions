#include<iostream>
using namespace std;
int i=0;
int hailstone(int n){
	if(n==1){
		cout<<n;
		return i;
	}
	cout<<n<<" ";
	i++;
	if(n%2==0){
		return hailstone(n/2);
	}else{
		return hailstone(n*3 +1);
	}
}
int main(){
	int n;
	cout<<"Enter the number: ";
	cin>>n;
	cout<<"Hailstone Numbers are: "<<endl;
	int s=hailstone(n);
	cout<<"\nLength is: "<<s+1;
	return 0;
}
