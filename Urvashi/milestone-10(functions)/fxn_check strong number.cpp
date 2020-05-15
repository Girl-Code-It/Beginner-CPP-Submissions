#include<iostream>
using namespace std;


void checkstrong(int start, int end);

long long fact(int num);

int main()
{	

    int start, end;
	cout<<"enter upper and lower limit:";
	cin>>start>>end;
	cout<<"all strong numbers between "<<start<<"and"<<end<<"are=";
	checkstrong(start, end);
	return 0;
	}
	
void checkstrong(int start,int end)
{   

    int  num;
    long long sum;
	while(start!=end)
	{	sum=0;
		num=start;
		while(num!=0)
		{ 
		sum+=fact(num%10);
		num/=10;
		}
		if(start==sum)
	    cout<<start<<endl;
	    start++;
		}
		}
		
		
long long fact(int num)
{   
    if(num==0)
	return 1;
	else
	return (num*fact(num-1));
	}
