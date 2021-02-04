//Q12- wap to count the total number of negative elements.
#include<iostream>
using namespace std;
void count(int array[], int size)
{
	int neg=0;
	for(int i=0;i<size;i++)
	{
		if(array[i]<0)
		neg++;
	}
	cout<<"Number of negative elements are = "<<neg;
}
int main()
{
	int arr[5]={12,-9,4,-33,2};
	count(arr,5);
	
}
