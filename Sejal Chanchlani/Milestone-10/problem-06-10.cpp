//problem-06-10
#include<iostream>
using namespace std;
void age(int x)
{
	if(x>=18)
	{
		cout<<"You are eligible to vote"<<endl;
		
	}
	else{
		cout<<"You are not eligible to vote";
	}
}
int main()
{
	int x;
	cout<<"enter age"<<endl;
	cin>>x;
	age(x);
}
