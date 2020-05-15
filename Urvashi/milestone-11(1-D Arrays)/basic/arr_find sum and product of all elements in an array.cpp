#include<iostream>
using namespace std;
int main()
{
	int array[100], sum=0, product=1, i, size;
	cout<<"enter the size of the array:"<<endl;
	cin>>size;
	cout<<"enter the elements in the array:";
	for(i=0;i<size;i++)
	{
		cin>>array[i];
	}
	for(i=0;i<size;i++)
	{
	sum+=array[i];
	product*=array[i];
	}
	cout<<"sum of all the elements of the array is="<<sum<<endl;
	cout<<"product of all the elements of the array is="<<product<<endl;
}
