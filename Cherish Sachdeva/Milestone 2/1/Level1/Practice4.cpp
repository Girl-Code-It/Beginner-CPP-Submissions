#include<bits/stdc++.h>
using namespace std;
int main(){
	int salary,service,bonus;
	cin>>salary;
	cin>>service;
	cout<<"Employee salary is "<<salary<<endl;
	cout<<"Employee years of service are "<<service<<endl;
	if(service>5){
		bonus=0.05*salary;
		cout<<"Bonus amount is "<<bonus<<endl;
	}else{
		cout<<"No bonus is given "<<endl;
	}
	return 0;
}