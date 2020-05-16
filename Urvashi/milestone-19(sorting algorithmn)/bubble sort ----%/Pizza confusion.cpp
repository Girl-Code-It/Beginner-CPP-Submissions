#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,points,max=0;
	string company,ans;
	cin>>n;
	while(n--)
	{
    cin>>company>>points;
	if(points>max)
{
    max=points;
    ans=company;
}
    else if(points==max){
    ans=min(ans,company);
}
}
    cout<<ans<<endl;
}
