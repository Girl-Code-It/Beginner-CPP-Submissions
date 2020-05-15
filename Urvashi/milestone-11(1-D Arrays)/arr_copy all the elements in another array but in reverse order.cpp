#include<iostream>
using namespace std;

int main()
{	
    int array[10],i;

	cout<<"enter the elements of arrays:";
	for(i=0; i<10; i++)
	cin>>array[i];
	
	cout<<"the elements of the array are="<<endl;
    for(i=0;i<10;i++)
	cout<<array[i]<<" ";
	
    int reverse[10],j=0;

    cout<<"reverse elements of the array are="<<endl;
    for(i=9;i>=0;i--)
    {
    reverse[i]=array[j];
    j++;
	}
	
    for(i=0;i<10;i++)
	cout<<reverse[i]<<endl;
}
