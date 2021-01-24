
#include <iostream>

using namespace std;

int main() {
	int testCases;
	cin >> testCases;	
    
	while(testCases-->0)
	{
		string s; cin>>s;
		bool isTrue = true;

		for(int i = 0; i < s.length() - 1; i++)
		{
			if(abs(s[i] - s[i+1]) != 1 && abs(s[i] - s[i+1]) != 25) 
			{
				isTrue = false;
				break;
			}
		}
		
		if(isTrue) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;

	}
	return 0;		
}

