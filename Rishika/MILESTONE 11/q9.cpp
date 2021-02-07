//Q9-wap to print the maximum and minimum elements of an array.
#include<iostream>
using namespace std;
int main()
{
	int array[5]={2,-99,40,-3,0};
	int max,min,i;
	max=array[0];
	min=array[0];
	for(i=0;i<5;i++)
	{
		if(array[i]>max)
		max=array[i];
		if(array[i]<min)
		min=array[i];
	}
	cout<<"Maximum number = "<<max<<endl;
	cout<<"Minimum number = "<<min;
}
