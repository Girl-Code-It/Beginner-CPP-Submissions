#include<bits/stdc++.h>
#include<queue>
using namespace std;

int main(){
	
	std::cin.sync_with_stdio(false);
	queue<int>q1;
	int n,i=0,count=0;
	cin>>n;
	int a,b[n];
	for(int i=0;i<n;i++)
	{
		cin>>a;
		q1.push(a);
	}
	
	for(int i=0;i<n;i++)
		cin>>b[i];
	
	while(!q1.empty()&&i<n)
	{
		if(q1.front()==b[i])
		{
			q1.pop();
			i++;
		}
		else
		{
		a = q1.front();
		q1.pop();
		q1.push(a);
		}
		count++;
	}
	cout<<count<<endl;
}
