#include<bits/stdc++.h>
using namespace std;
bool vote(int n){
	if(n>=18){
		return true;
	}else{
		return false;
	}
}
int main(){
	int n;
	cin>>n;
	if(vote(n)){
		cout<<"Eligible to vote"<<endl;
	}else{
		cout<<"Not Eligible to vote"<<endl;
	}
	return 0;
}