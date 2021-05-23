	#include<iostream>
using namespace std;
int main()
{
	int a,x,b,num,per;
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
		cout<<"reason of absence is medical cause?(Y/N)"<<endl;
		cin>>x;
		if(x=='N')
		{
		cout<<"not allowed for examination"<<endl;
	}
	else
	cout<<"allowed for examination"<<endl;
	}
	else
	cout<<" allowed for examination"<<endl;
	return 0;
	
}

