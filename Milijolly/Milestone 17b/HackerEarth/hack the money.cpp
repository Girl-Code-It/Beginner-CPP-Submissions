#include <bits/stdc++.h>
using namespace std;

bool ishack(long long int n)
{
	if(n == 1)
  		return true;
	if(n%10==0)
	{         
        if(ishack(n/10)==1)
        return true;
    }
    if(n%20==0){         
        if(ishack(n/20)==1)
        return true;
    }            
    return false;	
}

int main()
{
	int t; long long int n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ishack(n) ? cout<<"Yes" : cout<<"No";
		cout<<endl;
	}
	
}


