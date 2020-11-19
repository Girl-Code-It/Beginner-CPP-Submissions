#include<iostream>
using namespace std;
int main(){
	string str;
	int n;
	cin>>str;
	n=str.length();
	int ar[n]={0},i=0,res=0;
	while(i<n){
		int j=i+1;
		int same=1;
		while(str[i]==str[j] && j<n){
			same++;
			j++;
		}
		res+=same*(same+1)/2;
		ar[i]=same;
		i=j;
	}
	
	return 0;
}
