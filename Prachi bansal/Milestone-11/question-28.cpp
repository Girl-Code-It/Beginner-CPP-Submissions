//delete an element
#include<iostream>
using namespace std;
int main(){
	int a[20],n,index,k,m,b[20];
	cout<<"Enter the size: ";
	cin>>m;
	n=m;
	cout<<"Enter array: ";
	for(int i=0;i<m;i++){
		cin>>a[i];
	}
	cout<<"Enter the position: ";
	cin>>index;
	index=index-1;
	if(index>=0 && index<m){
		for(int i=0;i<m;i++){
			if(i==index){
				m=m-1;
				for(int j=i;j<m;j++){
					a[j]=a[j+1];
				}
			}
		}
		cout<<"Array after deletion is: ";
		for(int i=0;i<m;i++){
			cout<<a[i]<<" ";
		}
	}else{
		cout<<"INVALID";
	}
	return 0;
}
