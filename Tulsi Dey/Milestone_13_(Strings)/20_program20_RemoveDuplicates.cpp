
#include <iostream>

using namespace std;

int main() {
	
		string s; cin>>s;
		int a[26] = {0};

		for(int i = 0; i < s.length(); i++)
		{
			if(a[s[i] - 'a'] == 0)
			{
				cout<<s[i];
				a[s[i] - 'a'] = 1;
			}
		}
		cout<<endl;
	return 0;		
}
