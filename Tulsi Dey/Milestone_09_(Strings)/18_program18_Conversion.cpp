
#include <iostream>

using namespace std;

int main() {
	int testCases;
	cin >> testCases;

	string s; 

	while(getline(cin,s))
	{
	
		for(int i = 0; i < s.length(); i++)
		if(s[i] == ' ') cout<<"$";
		else cout<<(tolower(s[i]) - 'a' + 1);

		cout<<endl;
	}
	return 0;		
}

