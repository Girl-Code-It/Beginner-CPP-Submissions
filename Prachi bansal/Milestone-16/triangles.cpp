#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	long long n,a,b,c,d[10001][3];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>d[i][0];
		cin>>d[i][1];
		cin>>d[i][2];
		sort(d[i],d[i]+3);
	}
	for(int i=0;i<n;i++){
		cout<<d[i][0]<<" "<<d[i][1]<<" "<<d[i][2]<<endl;
	}
	
	return 0;
}
