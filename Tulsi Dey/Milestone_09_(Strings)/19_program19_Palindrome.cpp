
#include <iostream>

using namespace std;

int main() {
	int testCases;
	cin >> testCases;
	string str;
    cin.ignore(1,'\n');
	while(getline(cin,str))
	{
    string rev;

    for(int i = 0; i < str.length(); i++)
    rev += str[str.length() - 1 - i];

    if(rev == str) cout<<"YES";
    else cout<<"NO";
	cout<<endl;
	}
	return 0;		
}

