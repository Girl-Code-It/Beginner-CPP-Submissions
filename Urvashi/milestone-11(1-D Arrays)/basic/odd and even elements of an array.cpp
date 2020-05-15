#include<iostream>
using namespace std;
int main()
{
	int  i, size, a[100], even[100], odd[100], evencount, oddcount;
	cout<<"enter the size of the array:"<<endl;
	cin>>size;
	cout<<"enter the elements on the array:";
	for(i=0; i<size;i++)
	{
		cin>>a[i];
}   evencount=0, oddcount=0;
    for(i=0;i<size;i++)
    {
    	if(a[i]%2==0)
    {	even[evencount]=a[i];
    evencount++;}
    	else
    	{odd[oddcount]=a[i];
    	oddcount++;
	}
}
	cout<<"even elements of the array are="<<endl;
		for(i=0; i<evencount;i++)
	{	cout<<even[i];}  
	cout<<"odd elements of the array are="<<endl;
		for(i=0; i<oddcount;i++)
	{	cout<<odd[i];}    
	
	}
