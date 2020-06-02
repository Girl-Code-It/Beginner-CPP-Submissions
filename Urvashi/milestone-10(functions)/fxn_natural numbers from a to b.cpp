#include<iostream>
using namespace std;
void naturalnos(int x, int y);
int main()
{
	int x,y;
	cout<<"enter the upper and lower limit";
	cin>>x>>y;
	cout<<"natural numbers from"<<x<<"to"<<y<<"are";
	naturalnos(x, y);
	return 0;
}
void naturalnos(int start, int end)
{
	int i;
	for(i=start;i<end;i++)
	{
		cout<<i<<endl;
	}
}

