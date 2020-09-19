#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int n,a[50],max,x,y,min,z,w;
	cout<<"Enter the size of array: ";
	cin>>n;
	cout<<"Enter the elements: ";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	max=INT_MIN;
	min=INT_MAX;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(min > abs(a[i]-a[j])){
				min=abs(a[i]-a[j]);
				z=a[i];
				w=a[j];
			}
				if(max<abs(a[i]-a[j])){
				max=abs(a[i]-a[j]);
				x=a[j];
				y=a[i];
			}
		}
	}
	cout<<"Maximum difference is "<<max<<" and between "<<x<<" and "<<y;
	cout<<"\nMinimum difference is "<<min<<" and between "<<w<<" and "<<z;
	return 0;
}
