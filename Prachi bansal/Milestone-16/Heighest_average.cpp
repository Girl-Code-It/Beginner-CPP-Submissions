#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	long long n,sum=0;
	cin>>n;
	int a[n],ar[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	for(int i=1;i<=n;i++){
		sum+=a[i-1];
		ar[i-1]=sum/i;
	}
	int q,k;
	cin>>q;
	for(int i=0;i<q;i++){
		cin>>k;
		int temp=lower_bound(ar,ar+n,k)-ar;
		cout<<temp<<endl;
	}
	return 0;
}
