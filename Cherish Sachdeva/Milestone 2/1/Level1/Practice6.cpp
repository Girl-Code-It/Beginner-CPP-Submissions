#include<bits/stdc++.h>
using namespace std;
int main(){
	int age1,age2,age3;
	cin>>age1;
	cin>>age2;
	cin>>age3;
	if(age1>age2 && age1>age3){
		if(age2>age3){
			cout<<"Youngest is "<<age3<<endl;
		}else{
			cout<<"Youngest is "<<age2<<endl;
		}
		cout<<"Oldest is "<<age1;
	}else if(age2>age1 && age2>age3){
		if(age1>age3){
			cout<<"Youngest is "<<age3<<endl;
		}else{
			cout<<"Youngest is "<<age1<<endl;
		}
		cout<<"Oldest is "<<age2;
	}else if(age3>age2 && age3>age1){
		if(age2>age1){
			cout<<"Youngest is "<<age1<<endl;
		}else{
			cout<<"Youngest is "<<age2<<endl;
		}
		cout<<"Oldest is "<<age3<<endl;
	}
	return 0;
}