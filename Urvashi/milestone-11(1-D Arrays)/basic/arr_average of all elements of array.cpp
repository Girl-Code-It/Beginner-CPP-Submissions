#include<iostream>
using namespace std;
int main()
{	int array[100], i, largest, smallest, size, sum=0 ;
    float average;
	cout<<"enter the size of the array:"<<endl;
	cin>>size;
	cout<<"enter the elements in the array:"<<endl;
	for(i=0;i<size;i++)
	{cin>>array[i];}
	largest=array[0], smallest=array[0];
	for(i=0;i<size;i++)
	{	if(array[i]>largest)
		{	largest=array[i];	}
		if(array[i]<smallest)
		{	smallest=array[i];	}
	}
	cout<<"largest is="<<largest<<endl;
	cout<<"smallest is="<<smallest<<endl;
	for(i=0;i<size;i++)
	{
	sum+=array[i];
	}
	cout<<"sum of the elements of the array is="<<sum<<endl;
	average=sum/size;
	cout<<"average of the elements of the array is="<<average<<endl;
}
