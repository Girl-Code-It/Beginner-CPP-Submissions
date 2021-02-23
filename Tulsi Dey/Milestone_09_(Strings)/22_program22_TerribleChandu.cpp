
#include <iostream>

using namespace std;

int main() {
	int testCases;
	cin >> testCases;	

	string s;
    cin.ignore(1,'\n');
	while(getline(cin,s))
	{
		for(int i = 0; i < s.length(); i++)
		cout<<s[s.length() - 1 - i];
		cout<<endl;
	}
	return 0;		
}

