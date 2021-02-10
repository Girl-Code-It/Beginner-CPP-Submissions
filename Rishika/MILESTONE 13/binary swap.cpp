#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a,b,c;
	cin>>a;
	cin>>b;
	char t;
	int count=0,p=0,la=a.length(),lb=b.length();
	if(la==lb&&la>=1&&la<=100000){
		if(a==b){
			count=0;
			cout<<count;
		}else
		{
			c=b;
	for(int i=0;i<lb;i++)
	{
		t=b[i];
		b[i]=b[i+1];
		b[i+1]=t;
		if(b==a){
			count++;
			p=1;
			break;
		}else
		{   b=c;
			p=0;
			continue;
		}
}
if(p==1)
cout<<count;
else
cout<<"-1";		
	}
		}
	   
}
