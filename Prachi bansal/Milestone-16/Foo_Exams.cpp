#include<iostream>
#include<math.h>
using namespace std;
int main(){
	long long a,b,c,d,t,k;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>a>>b>>c>>d>>k;
		long long n=0,j=0,ans=-1;
		while(ans<=k){
			ans=a*pow(j,3) + b*pow(j,2) + c*j +d;
			j++;
		}
		cout<<j-2<<endl;
	}
	return 0;
}
