#include <iostream>

using namespace std;

int main()
{
	int testCases; cin>>testCases;

	while(testCases-->0)
	{
		string a, b; cin>>a>>b;
		int n = a.length(), c, flg = 0;
        int k, m, net = 0;
		net = b[0] - a[0];
		if(net < 0) net += 26;
		c = net;

		for(int i = 0; i < n; i++)
		{
            net = b[i] - a[i];
			if(net < 0) net += 26;
			if(net != c) 
			{
				flg = 1;
				break;
			}
		}

		if(flg != 1) cout<<c<<endl;
		else cout<<-1<<endl;
		
	}
	return 0;
}