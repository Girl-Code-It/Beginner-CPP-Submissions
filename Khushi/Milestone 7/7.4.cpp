#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int a[n];
    cout<<"Enter elements of array: ";
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int i=0, j=n-1, temp=0;
    while(i<j){
    	temp=a[i];
    	a[i]=a[j];
    	a[j]=temp;
    	i++;
    	j--;
	}
	cout<<"Reversed array: ";
	for(int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
    return 0;
}
