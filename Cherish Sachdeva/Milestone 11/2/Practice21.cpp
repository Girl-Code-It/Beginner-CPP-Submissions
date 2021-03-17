#include<bits/stdc++.h>
using namespace std;
void reverse(int a[],int i,int j){
	int li=i;
	int ri=j;
	while(li<ri){
		swap(a[li],a[ri]);
		li++;
		ri--;
	}
}
int main(){
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(k<0){
		k=k+n;
	}
	k=k%n;
	reverse(a,0,n-k-1);
	reverse(a,n-k,n-1);
	reverse(a,0,n-1);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;

}