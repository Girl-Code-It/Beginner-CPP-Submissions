#include<iostream>
using namespace std;
int table(int num)
{
    for(int i=1;i<=10;i++)
	cout<<num<<"*"<<i<<"="<<num*i<<endl;
}
int main()
{
	int num;
	cout<<"enter number:";
	cin>>num;
	table(num);
}
