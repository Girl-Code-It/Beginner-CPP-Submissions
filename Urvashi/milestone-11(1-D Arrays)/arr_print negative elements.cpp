#include<iostream>
using namespace std;
int main()
{
	int A[100], i, size;
	cout<<"enter the size of the  array:"<<endl;
	cin>>size;
	cout<<"enter the elements in the array:"<<endl;
	for(i=0;i<size;i++)
	{
		cin>>A[i];
	}
	for(i=0;i<size;i++)
	{
		if(A[i]<0)
		cout<<A[i]<<"    ";
	}
	return 0;
}
