#include<iostream>
using namespace std;
int main()
{
	int a,b,num,per;
	cout<<"enter the number of class held"<<endl;
	cin>>a;
	cout<<"enter the number of class attended"<<endl;
	cin>>b;
	cout<<"percentage of class attended"<<endl;
	num=b*100;
	per=num/a;
	cout<<per<<endl;
	if(per<75)
	{
		cout<<"not allowed for examination"<<endl;
	}
	else
	cout<<" allowe for examination"<<endl;
	return 0;
	
}
