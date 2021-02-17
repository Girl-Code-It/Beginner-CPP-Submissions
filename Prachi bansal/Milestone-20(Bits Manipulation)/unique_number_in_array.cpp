//finidng unique numbers from an array which has element 
//repeated not more than twice and contains unique number
//as well using bitwise operator

#include<iostream>
using namespace std;
void unique(int a[],int n){
	int res=0;
	for(int i=0;i<n;i++){
		res=res^a[i];
	}
	//find the setbit in res
	int i=0;
	int temp=res;
	while(temp>0){
		if(temp&1==1){
			break;
		}
		i++;
		temp=temp>>1;
	}
	int mask=1<<i;
	int firstno=0;
	for(int i=0;i<n;i++){
		if( (mask&a[i])!=0){
			firstno=firstno^a[i];
		}
	}
	int second=res^firstno;
	cout<<firstno<<endl;
	cout<<second<<endl; 
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	unique(a,n);
	return 0;
}
