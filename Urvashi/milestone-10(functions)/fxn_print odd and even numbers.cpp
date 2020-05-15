#include<iostream>
using namespace std;

void printeven(int start, int end)
{	
    cout<<"all even nos from "<<start<<"to"<<end<<"are"<<endl;
	int i;
	for(i=start;i<end;i++)
    {	
    if(i%2==0)
	cout<<i<<endl;
	}}


void printodd(int start, int end)
{   	
    cout<<"all odd nos from"<<start<<"to"<<end<<"are"<<endl;
    int i;
	for(i=start;i<end;i++)
   {	
   if((i%2)!=0)
   cout<<i<<endl;
   }}
 

int main()
{
	int x, y;
	cout<<"enter upper and lower limit:";
	cin>>x>>y;
	printeven(x,y);
	printodd(x,y);
	return 0;
}



