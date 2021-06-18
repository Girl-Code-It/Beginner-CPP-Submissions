#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string a;
	vector<string> v,vrev;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		v.push_back(a);
		reverse(a.begin(),a.end());
		vrev.push_back(a);
	}
	for(int i=0;i<n;i++)
	{
		if(find(vrev.begin(),vrev.end(),v[i])!=vrev.end()) //to vrev.end()-pointer points to the element next to last element
		{   int x=v[i].size();
			cout<<x<<" "<<v[i][x/2];
			break;
		}
	}
}
