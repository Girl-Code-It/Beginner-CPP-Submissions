#include<iostream>
using namespace std;

int check(int x)
{
	int prime=1;
	for(int i=1;i<=x/2;i++){
		if(x%i==0)
	      prime=1;
	    else
	      prime=0;
    }
    if(prime==1)
      return 0;
    else
      return 1;
}

int main(){
	int no;
	cout<<"\n Enter the number:";
	cin>>no;
	if(check(no)==0)
	  cout<<"\n The number is not prime";
	else if(check(no)==1)
	  cout<<"\n The number is prime";
	return 0;
}
