#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,count=0;
	cin>>n;

	double r,w,h;
	while(n)
	{
		cin>>w>>h;

		if(w>=h)
		r=w/h;

		else
		r=h/w;

		if(r>=1.6 && r<=1.7)
		count++;
			
	n--;
	}
	cout<<count<<endl;
}

