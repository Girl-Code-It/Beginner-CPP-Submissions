#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,count=0;
	cin>>n;
	int arr[n+1];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
  sort(arr,arr+n);
    for(int i=0;i<n;i++){
		if(arr[i]==arr[i+1]){
            count++;
            i=i+1;
        }
	}
    cout<<count<<endl;
}
