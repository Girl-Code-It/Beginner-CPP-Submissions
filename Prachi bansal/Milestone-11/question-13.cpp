#include<iostream>
using namespace std;
int main(){
	int a[10];
	int b[12],n,j,x,maximum,second,i,m,k;
	cout<<"Enter 10 elements in the array: ";
	for(i=0;i<10;i++){
		cin>>a[i];
	}
	maximum=INT_MIN;
	for(i=0;i<10;i++){
		if(maximum<a[i]){
			maximum=a[i];
			n=i;
		}
	}
	for(i=0;i<10;i++){
		if(a[i]!=maximum){
			second = max(second , a[i]);
		}
	}
	x=maximum-second;
	for(j=0;j<n;j++){
		b[j]=a[j];
	}
	b[j++]=second;
	b[j++]=x;
	for(k=j,m=n+1;k<11,m<10;k++,m++){
		b[k]=a[m];
	}
	cout<<"Final arary: ";
	for(i=0;i<11;i++){
		cout<<b[i]<<" ";
	}
	return 0;
}
