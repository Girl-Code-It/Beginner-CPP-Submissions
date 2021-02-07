//Q11- wap to print the total number of odd and even elements in an array.
#include<iostream>
using namespace std;
int main()
{
	int a[100]={1,2,3,4,5,6,7,8,9,10};
	int eve=0,odd=0,i;
	cout<<"The array is = "<<endl;
	for(i=0;i<9;i++)
	{
		cout<<a[i]<<" ";
	}
	for(i=0;i<9;i++)
	{
		if(a[i]%2==0)
		eve++;
		else
		odd++;
	}
	cout<<endl<<"Number of even elements = "<<eve<<endl;
	cout<<"Number of odd elements = "<<odd;
}
