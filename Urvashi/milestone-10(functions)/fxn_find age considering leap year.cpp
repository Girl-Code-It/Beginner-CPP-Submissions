#include<iostream>
using namespace std;


void findage(int cd, int cm, int cy, int bd, int bm, int by)
{
	int month[]={31, 28, 31, 30,31,30,31,31,30,31,30,31};
	if(bm>cm)
	{
		cy=cy-1;
		cm=cm+12;	
	}
	cout<<"present age is"<<(cy-by)<<" "<<(cm-bm)<<" "<<(cd-bd)<<endl;
}


int isleapyear(int x)
{
	int  count=0, cy, by;
	for(x=by;x<=cy;x++)
{
		if(x%4==0&&x%100!=0||x%400==0)
	count++;
}
}

int main()
{
	int cd, cm, cy, bd, bm, by, year, count, x;
	cout<<"enter the current date, month, year  and birth date,  month,year:";
	cin>>cd>>cm>>cy>>bd>>bm>>by;

	if(isleapyear(x)) 
	cout<<"present age is"<<(cy-by)<<" "<<(cm-bm)<<" "<<(cd-bd+count);
	else
	findage(cd, cm,cy, bd, bm, by );
}
