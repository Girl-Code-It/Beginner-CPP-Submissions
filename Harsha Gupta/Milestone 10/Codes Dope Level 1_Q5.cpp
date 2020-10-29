#include<iostream>
using namespace std;

int check(int x)
{
	if(x%2!=0)
	  return 0;
	else
	  return 1;
}

int main(){
	int no;
	cout<<"\n Enter the number:";
	cin>>no;
	if(check(no)==0)
	  cout<<"\n The number is odd.";
	else if(check(no)==1)
	  cout<<"\n The number is even";
	return 0;
}
