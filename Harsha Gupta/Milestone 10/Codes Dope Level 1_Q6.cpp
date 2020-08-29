#include<iostream>
using namespace std;

int check(int x)
{
	if(x<18)
	  return 0;
	else
	  return 1;
}

int main(){
	int no;
	cout<<"\n Enter the number:";
	cin>>no;
	if(check(no)==0)
	  cout<<"\n Not eligible to vote";
	else if(check(no)==1)
	  cout<<"\n Eligible to vote";
	return 0;
}
