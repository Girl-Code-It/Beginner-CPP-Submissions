#include<iostream>
using namespace std;
int main()
{
	int min=INT_MAX,max=INT_MIN;
	int t,n,a;
	cin>>t;
	while(t--)
	{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		if(a>max)
		max=a;
		else if(a<min)
		min=a;
	}
	cout<<(max+min)<<endl;
	}
}

