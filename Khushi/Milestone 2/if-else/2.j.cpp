//Count number of digits in number.
#include<iostream>
using namespace std;
int main(){
	int num, count=0, i;
	cout<<"Enter number: ";
	cin>>num;
	while(num!=0){
		num = num/10;
		count++;
	}
	cout<<"Number of digits: "<<count<<endl;
	return 0;
}
