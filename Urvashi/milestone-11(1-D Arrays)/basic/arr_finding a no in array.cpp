#include<iostream>
using namespace std;
int main()
{
	int array[10];
	int i;
	cout<<"enter the elements of arrays:";
	for(i=0; i<10; i++)
	{
		cin>>array[i];
	}
	int num;
	cout<<"enter any number:"<<endl;
	cin>>num;
	int found=0;
	for(i=0;i<10;i++)
{
		if(num==array[i])
        found=1;
        break;}
    if (found)
    cout<<num<<"is present in the array";
    else 
    cout<<num<<"is not present in the array";
}
