//Q13- wap to copy all elements of an array to another array.
#include<iostream>
using namespace std;
int main()
{
	int a1[5],a2[5];
	int i;
	for(i=0;i<5;i++)
	{
		cout<<"Enter an element = ";
		cin>>a1[i];
	}
	for(i=0;i<5;i++)
	{
		a2[i]=a1[i];
	}
	cout<<"Elements of the first array are = "<<endl;
	for(i=0;i<5;i++){
	cout<<a1[i]<<"  ";
}
cout<<endl<<"Elements copied into the second array are = "<<endl;
for(i=0;i<5;i++){
	cout<<a2[i]<<"  ";
}
}
