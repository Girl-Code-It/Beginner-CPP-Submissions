//radix sort this is done by appling counting sort to individual digits
//time complexity: dO(n+k)
//space complexity: O(n+k)

#include<iostream>
using namespace std;
int Max(int a[],int size){
	int m=a[0];
	for(int i=1;i<size;i++){
		if(m<a[i]){
			m=a[i];
		}
	}
	return m;
}
int counting_sort(int a[],int size,int div){
	int oa[size];
	int range=10;
	int ca[10]={0};
	
	for(int i=0;i<size;i++){	//increasing the value of count array acc. to input array occurences
		++ca[ (a[i]/div)%10 ];
	}
	for(int i=0;i<9;i++){   //cumulative array
		ca[i+1]=ca[i]+ca[i+1];
	}
	for(int i=size-1;i>=0;i--){		//placing elemnets in sorted manner
		oa[ca[(a[i]/div)%10]-1]=a[i];
		ca[(a[i]/div)%10]--;
	}
	for(int i=0;i<size;i++){		//coping output array to input array
		a[i]=oa[i];
	}
}
int radix_sort(int a[],int size){
	int m= Max(a,size);
	for(int div=1;m/div>0;div*=10){
		counting_sort(a,size,div);
	}
}
int main(){
	int a[7];
	cout<<"Enter the array elements:(7) "<<endl;
	for(int i=0;i<7;i++){
		cin>>a[i];
	}
	radix_sort(a,7);
	cout<<"Array after sorting is: "<<endl;
	for(int i=0;i<7;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
