#include <bits/stdc++.h>
using namespace std;

bool getRes()
{
    string s; cin>>s;
	int n = stoi(s), size = s.length();

	if(n%21 == 0)
	{
		return 0;
	}

	for(int i = 0; i < size; i++)
	{
		if(s[i] == '2' && s[i+1] == '1')
		return 0;
	}

	return 1;

}

int main()
{

	int testCases = 1;
	cin>>testCases;

	while(testCases-->0)
	{
        if(getRes())
		{
			cout<<"The streak lives still in our heart!"<<endl;
		}
		else
		{
			cout<<"The streak is broken!"<<endl;
		}
	}
	return 0;
}