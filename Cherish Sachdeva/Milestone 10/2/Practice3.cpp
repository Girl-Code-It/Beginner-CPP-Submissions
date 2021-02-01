#include<bits/stdc++.h>
using namespace std;
int max(int a,int b){
	int c=a>b?a:b;
	return c;
}
int main(){
	int a,b;
	cin>>a;
	cin>>b;
	cout<<"Max is "<<max(a,b);
	return 0;
}