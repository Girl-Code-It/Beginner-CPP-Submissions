//for negative number we invert the number and add 1 (2s compliment representataion)
//-x= ~x+1
//-~x=x+1;
#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	cout<<-~n;
	return 0;
}
