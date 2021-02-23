//time complexity: O(n^2)
//in this we find min and swap it with element at 0yh position 
//then further in the remaining array min is found and swapped
//with element at 1st position and so on..
//we can also perform descending order in selection sort
#include<iostream>
using namespace std;
int main(){
	int n,x=INT_MAX,k,temp;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n-1;i++){
		for(int j=i;j<n;j++){
			if(x>a[j]){
				x=a[j];
				k=j;
			}
		}
		swap(a[i],a[k]);
		x=INT_MAX;
		
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
