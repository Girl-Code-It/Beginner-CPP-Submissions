//q23-input array is [10,12,20,30,25,40,32,31,35,50,60],program should find subarray that lies between the indexes 3 and 8.
#include<iostream>
using namespace std;
int main()
{
	int a[15]={10,12,20,30,25,40,32,31,35,50,60},b[15];
	int i;
	cout<<"Array : "<<endl;
	for(i=0;i<11;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl<<"Subarray (elements from index 3 to 8) : "<<endl;
	for(i=3;i<9;i++)
	{
		cout<<a[i]<<" ";
	}
}

