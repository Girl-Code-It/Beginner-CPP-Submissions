#include<iostream>
#include<string>
#define MAX 26

using namespace std;

int main()
{
	int t;
	cin >> t;
	string s;
	string n;
	for(int i=0; i<t; i++)
	{
		cin >> s;
		int arr[MAX] = {0};
		for(int j=0; s[j] != '\0'; j++)
		{
			if(arr[s[j]-'a'] == 0)
            {
                cout << s[j];
                arr[s[j]-'a']++;
            }
		}
		cout << endl;

	}
}
