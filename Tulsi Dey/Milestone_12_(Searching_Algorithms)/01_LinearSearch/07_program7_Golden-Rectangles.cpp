#include <bits/stdc++.h>

using namespace std;



int getRes()
{
	double W, H; cin>>W>>H;

	if(W/H >= 1.6 && W/H <= 1.7) return 1;
	else if(H/W >= 1.6 && H/W <= 1.7) return 1;
	return 0;
}

int main()
{
    // ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

	int testCases = 1;
	cin>>testCases;

	int count = 0;

	while(testCases-->0)
	{
       count += getRes();
	}
	cout<<count<<endl;
	return 0;
}