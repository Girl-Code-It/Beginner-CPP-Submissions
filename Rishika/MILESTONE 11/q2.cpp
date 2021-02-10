//q2-take 10 int inputs from user,store them in an array. Ask for another number and check if that number is present in the array.
#include<iostream>
using namespace std;
int main()
{
	int i,n,present;
	int arr[10];
	for(i=0;i<10;i++)
	{
		cout<<"Enter a number = ";
		cin>>arr[i];
	}
	cout<<endl<<"Enter a number to check if it's present in the array = ";
	cin>>n;
	present=0;
	for(i=0;i<10;i++)
	{   
		if(arr[i]==n)
		{
			present=1;
			break;
		}
    }
    if(present==1)
    {
    	cout<<"The number is present.";
	}else
	{
		cout<<"The number is not present.";
	}
}
