#include<iostream>
using namespace std;
int main(){
	long long q;
	cin>>q;
	long long a[q][3];
	for(int i=0;i<q;i++){
		cin>>a[i][0]>>a[i][1]>>a[i][2];
	}
	long long sum=0;
	for(int i=0;i<q;i++){
		if(a[i][0]==2){
			sum=0;
			int pos=i;
			int time=a[i][1];
			for(int j=0;j<pos;j++){
				if(a[j][2]<=time && a[j][0]==1){
					sum+=a[j][1];
				}
			}
			cout<<sum<<endl;
		}
	}
}
