#include <iostream>

using namespace std;

int main()
{
	int testCases; cin>>testCases;

	while(testCases-->0)
	{
		int n, k = 0, count = 0;
		string s;
		cin>>n>>s;

		for(int i = 0; i < n; i++)
		{
			if(s[i] != s[i+1]) count++;
			else 
			{
				k += count;
				count = 0;
			}
		}

		k += count;
 
		cout<<k<<endl;
		
	}
	return 0;
}