#include<iostream>
using namespace std;

int main()
{
	int array[100], i,m , n, size;
	
	cout<<"enter the upper and lower limit of the subarray and size of the original array:";
	cin>>m>>n>>size;
	
	cout<<"enter the elements in the array:"<<endl;
	for(i=0;i<size;i++)
	cin>>array[i];
	
	cout<<"the subarray lies between :"<<m<<"and"<<n<<"is"<<endl;
	for(i=m;i<n;i++)
    cout<<array[i]<<" ";
    
}
