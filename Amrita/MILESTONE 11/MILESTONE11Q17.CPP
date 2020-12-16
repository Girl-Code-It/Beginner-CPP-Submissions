// PROGRAM TO MERGE TWO ARRAYS INTO A SINGLE ARRAY
#include<iostream>
#define size 100
using namespace std;
int main()
{
	int i,j,k,arr[size],arr1[size],arr2[2*size],length1,length2;
	cout<<"ENTER THE LENGTH OF THE 1st ARRAY  ";
	cin>>length1;
	for ( i=0;i<length1;i++)
	{
		cin>>arr1[i];
	}
	cout<<"ENTER THE LENGTH OF THE 2nd ARRAY   ";
	cin>>length2;
	for ( i=0;i<length2;i++)
	{
		cin>>arr2[i];
	}
	cout<<"MERGING THE TWO ARRAYS\n";
	for ( i=0;i<length1;i++)
	{
		arr[i]=arr1[i];
	}
	for (j=length1, i=0;i<length2,j<(length1+length2);j++,i++)
	{
		arr[j]=arr2[i];
	}

	for ( k=0;k<(length1+length2);k++)
	{
		cout<<arr[k]<<"\t";
	}

}
