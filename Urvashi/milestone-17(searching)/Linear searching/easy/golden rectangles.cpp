#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int N,count=0,ratio;
	cin>>N;
	long long int w,h;
	while(N--)
	{cin>>w;
	cin >>h;
	if(w>=h)
	ratio=(float)w/h;
	else
	ratio=(float)h/w;
	if(ratio>=1.6 &&ratio<=1.7)
	count++;	
}
    cout<<count<<endl;
}
