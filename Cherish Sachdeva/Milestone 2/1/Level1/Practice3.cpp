#include<bits/stdc++.h>
using namespace std;
int main(){
	int quant,cost;
	cout<<"How much quantity the user wants to buy?"<<endl;
	cin>>quant;
	cout<<quant<<" units"<<endl;
	cost=100*quant;
	if(cost>1000){
		cost-=0.1*cost;
		cout<<"User has to pay "<<cost<<endl;
	}else{
		cout<<"User has to pay "<<cost<<endl;
	}
	return 0;

}