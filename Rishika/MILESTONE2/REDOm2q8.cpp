//q8- modification in the previous question wrt medical information.
#include<iostream>
using namespace std;
int main()
{
	float p,a,h;
	char m;
	cout<<"Number of classes attended= "<<endl;
	cin>>a;
	cout<<"Number of classes held= "<<endl;
	cin>>h;
	p=(a/h)*100;
	cout<<"Percentage of attendance is- "<<p<<endl;
    if(p>75)
    {
    	cout<<"allowed.";
	}else
	{
		cout<<"Medical condition? (Y/N)?";
		cin>>m;
		if(m='Y')
		{
			cout<<"allowed.";
		}else
		{
			cout<<"not allowed.";
		}
	}
}
