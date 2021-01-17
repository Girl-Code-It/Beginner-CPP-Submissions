#include<bits/stdc++.h>
using namespace std;
int main(){
	int yr;
	cin>>yr;
	if(yr%4==0){
		if(yr%100!=0){
			cout<<"Leap year"<<endl;
		}else{
			if(yr%400==0){
				cout<<"Leap Year"<<endl;
			}else{
				cout<<"Not a leap year"<<endl;
			}
		}
	}else{
		cout<<"Not a leap year"<<endl;
	}
	return 0;
}