#include<iostream>
using  namespace std;
int product(int a[],int n){
	int max=0,max_here=1,min_here=1;
	for(int i=0;i<n;i++){
		if(a[i]>0){
			max_here*=a[i];
			min_here = min(1,min_here*a[i]);
		}else if(a[i]<0){
			int temp=max_here;
			if(min_here*a[i]>1){
				max_here=min_here*a[i];
			}else{
				max_here=1;
			}
			min_here=temp*a[i];
		}else{
			max_here=1;
			min_here=1;
		}
		if(max<max_here){
			max=max_here;
		}
	}
	return max;
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<product(a,n);
	return 0;
}
