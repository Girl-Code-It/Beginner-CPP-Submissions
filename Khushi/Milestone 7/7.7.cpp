//find max and min element in array.
#include<iostream>
using namespace std;
int main(){
	int a[10], i , n;
	cout<<"Enter size of array: ";
	cin>>n;
	cout<<"Enter elements of array: ";
	
	for(i=0; i<n; i++){
		cin>>a[i];
	}
	
	int max= a[0], min =a[0];
	for(i=0; i<n; i++){
		if(a[i]>max)
		max=a[i];
		
		if (a[i]<min)
		min=a[i];
	}
	
	cout<<"Maximum element: "<<max<<endl;
	cout<<"Minimum element: "<<min<<endl;
	return 0;
	
}
