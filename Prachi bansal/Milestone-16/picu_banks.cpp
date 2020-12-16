#include<iostream>
#include<math.h>
using namespace std;
int main(){
	long long d,a,m,b,x,n,count,month,ctr;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>d>>a>>m>>b>>x;
		month=(x-d)/(a*m+b);
		ctr=(x-d)%(a*m+b);
		month*=(m+1);
		if(ctr%a==0){
			month+=(ctr/a);
		}else{
			month+=(ctr/a)+1;
		}
		cout<<month<<endl;
	}
	return 0;
}
