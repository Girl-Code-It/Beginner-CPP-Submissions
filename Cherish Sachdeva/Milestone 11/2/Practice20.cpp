#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k1=0,k2=0;
	cin>>n;
	vector<int> v;
	int a[n],e[n],o[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		e[i]=-1;
		o[i]=-1;
	}
	for(int i=0;i<n;i++){
		if(a[i]%2==0){
			e[k1++]=a[i];
		}else{
			o[k2++]=a[i];
		}
	}
	sort(e,e+k1);
	sort(o,o+k2);
	for(int i=0;i<k1;i++){
		v.push_back(e[i]);
	}
	for(int i=0;i<k2;i++){
		v.push_back(o[i]);
	}
	for(auto it=v.begin();it!=v.end();it++){
		cout<<*it<<" ";
	}
	return 0;
}