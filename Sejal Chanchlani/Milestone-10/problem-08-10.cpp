//problem-07-10
#include<iostream>
using namespace std;
void marks(int x)
{
	if(x>=91 && x<=100)
	{
		cout<<"ft"<<endl;
		cout<<"Grade - "<<"AA"<<endl;
	}
	else if(x>=81 && x<=90)
	{
		cout<<"lk"<<endl;
		cout<<"Grade - "<<"AB"<<endl;
	}
	else if(x>=71 && x<=80)
	{
		cout<<"Grade - "<<"BB"<<endl;
	}
	else if(x>=61 && x<=70)
	{
		cout<<"Grade - "<<"BC"<<endl;
	}
	else if(x>=51 && x<=60)
	{
		cout<<"Grade - "<<"CD"<<endl;
	}
	else if(x>=41 && x<=70)
	{
		cout<<"Grade - "<<"DD"<<endl;
	}
	else{
		cout<<"fail"<<endl;
	}
}
int main()
{
int x;
cout<<"enter marks out of hundred"<<endl;
cin>>x;
marks(x);
}
