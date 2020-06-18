/* A shop will give discount of 10% if the cost of purchased quantity is more than 1000.
Ask user for quantity 

Suppose, one unit will cost 100.
Judge and print total cost for user. */

#include<iostream>

using namespace std;

int main()
{
	int units{0}, cost{0} , total_cost{0} , dis{0};


	cout<<"Enter the quantity of units  u purchased";
	cin>>units;

	cost=100* units;

	if(cost>1000)
	{
	dis= ((10*cost)/100);
	total_cost= cost-dis;
	}
	else
	{
	total_cost= cost;
	}

	cout<<"Total cost of your products are"<< total_cost;

	return 0;
}
