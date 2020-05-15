#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,d, a, m , b , x,lb,la,i,count;
	cin>>t;
	while(t--)
	{
		cin>>d>>a>>m>>b>>x;
		la=x/a;
		lb=x%a;
		count=la+lb;
		cout<<count<<endl;
	}
	
}
