#include <iostream>

using namespace std;

int main() {
	int testCases;
	cin >> testCases;	

	while (testCases-->0)
	{
		string str; cin>>str;
        int count = 0;
		for(int i = 0; i < str.length(); i++)
		{
			if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o'|| str[i] == 'u')
			count++;
		}
		cout<<count<<endl;
	}									

	return 0;		
}

