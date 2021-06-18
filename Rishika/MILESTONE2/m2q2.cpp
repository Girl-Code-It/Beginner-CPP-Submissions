//q2-10% discount if cost of quantitiy purchased is more than 1000.the cost of one unit is 100.
#include<iostream>
using namespace std;
int main()
{
	int q,cost,pay;
	cout<<"Enter the quantity of goods purchased - ";
	cin>>q;
	cost = q*100;
	if(q>=1000)
	{pay=cost-cost*0.1;}
	else 
	{cost=pay;}
	cout<<pay<<" rupees need to be payed.";
	return 0;
	
 } 
