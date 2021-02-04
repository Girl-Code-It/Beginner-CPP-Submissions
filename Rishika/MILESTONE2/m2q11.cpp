//q11-to check whether a year is leap or not.
#include<iostream>
using namespace std;
int main()
{
	int y;
	cout<<"Enter a year- ";
	cin>>y;
	if(y%100!=0)
	{if(y%4==0)
	{cout<<"It is a leap year.";
	}else
	{cout<<"Year is not leap";
	}
	}else if(y%100==0)
	{if(y%4==0)
	{cout<<"The year is leap.";
	}else if(y%4!=0)
	{cout<<"The year is not leap.";
	}
	}
	return 0 ;
}
