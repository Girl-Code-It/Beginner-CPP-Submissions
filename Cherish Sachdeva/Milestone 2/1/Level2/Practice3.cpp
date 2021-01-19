#include<bits/stdc++.h>
using namespace std;
int main(){
	int num,re;
	cin>>num;
	while(num!=0){
		re=num%10;
		cout<<re;
		num=num/10;
	}
	return 0;
}