#include<iostream>
using namespace std;
int main(){
	int a[10],max,small;
	float avg,sum=0;
	cout<<"enter the array of 10 elements: "<<endl;
	for(int i=0;i<10;i++){
		cin>>a[i];
	}
	max=a[0];
	small=a[0];
	for(int i=0;i<10;i++){
		sum+=a[i];
		if(max<a[i]){
			max=a[i];
		}
		if(small>a[i]){
			small=a[i];
		}
	}
	avg=sum/10;
	cout<<"max value is: "<<max<<endl;
	cout<<"smallest value is: "<<small<<endl;
	cout<<"sum of the numbers is: "<<sum<<endl;
	cout<<"average of the numbers is: "<<avg;
	return 0;
}
