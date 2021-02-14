//counting sort count the occurences of each element in the array
//the count is stored in an array and sorting is done by mapping 
//the count as an index of the array.
//Time complexity: O(n+k)
//space complexity: O(n+k)

#include<iostream>
using namespace std;
int counting_sort(int a[]){
	int oa[7];
	int range=10;
	int ca[10];
	for(int i=0;i<10;i++){  //initialzing the counting array with 0
		ca[i]=0;
	}
	for(int i=0;i<7;i++){	//increasing the value of count array acc. to input array occurences
		++ca[a[i]];
	}
	for(int i=0;i<9;i++){   //cumulative array
		ca[i+1]=ca[i]+ca[i+1];
	}
	for(int i=0;i<7;i++){		//placing elemnets in sorted manner
		oa[--ca[a[i]]]=a[i];
	}
	for(int i=0;i<7;i++){		//coping output array to input array
		a[i]=oa[i];
	}
}
int main(){
	int a[7];
	cout<<"Enter the array elements:(7) "<<endl;
	for(int i=0;i<7;i++){
		cin>>a[i];
	}
	counting_sort(a);
	cout<<"Array after sorting is: "<<endl;
	for(int i=0;i<7;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
