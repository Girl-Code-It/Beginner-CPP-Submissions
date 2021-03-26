#include <bits/stdc++.h>
using namespace std;

bool isStreak(int t)
{
	int k=t; int count=0;
        while(k!=0)
        {   int x=k%100;
			if(x==21)
        	   count++;
	
        	k=k/10;
        }
	 if(count>0||(t%21)==0)
	  return true;
	
	return false;
	
}
int main() 
{
	int t, num;
	cin>>t;
	while(t--)
	{
		cin>>num;
		isStreak(num)? cout<<"The streak is broken!" : cout<<"The streak lives still in our heart!";
	cout<<endl;
	}
	return 0;		
}


