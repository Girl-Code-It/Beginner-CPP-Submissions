#include<bits/stdc++.h>
using namespace std;
void grades(int n){
	if(n>=91 && n<=100){
		cout<<"AA";
	}else if(n>=81 && n<=90){
		cout<<"AB";
	}else if(n>=71 && n<=80){
		cout<<"BB";
	}else if(n>=61 && n<=70){
		cout<<"BC";
	}else if(n>=51 && n<=60){
		cout<<"CD";
	}else if(n>=41 && n<=50){
		cout<<"DD";
	}else{
		cout<<"Fail";
	}
}
int main(){
	int marks;
	cin>>marks;
	grades(marks);
	return 0;
}