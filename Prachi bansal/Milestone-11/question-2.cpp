//linear search
#include<iostream>
using namespace std;

int main(){
	int a[10],l,k,p=0;
	cout<<"Enter integers in the array: ";
	for(int i=0;i<10;i++){
		cin>>a[i];
	}
	cout<<"\nEnter the number to be searched: ";
	cin>>l;
	for(k=0;k<10;k++){
		if(a[k]==l){
			p=1;
			break;
		}
	}
	if(p==1){
		cout<<"\nFound at "<<k+1;
	}else{
		cout<<"\nNot found";
	}
	return 0;
}
