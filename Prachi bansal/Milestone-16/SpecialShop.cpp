#include<iostream>
#include<math.h>
#include<limits.h>
using namespace std;
int main(){
	int t,n,m,k;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>k>>n>>m;
		int min=INT_MAX;
		for(int j=0;j<=k;j++){
			int sum=0;
			sum=n*pow(j,2) + m*pow((k-j),2);
			if(sum<min){
				min=sum;
			}
		}
		cout<<min;
	}
	return 0;
}
