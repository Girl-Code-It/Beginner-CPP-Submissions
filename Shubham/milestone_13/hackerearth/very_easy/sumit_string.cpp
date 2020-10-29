#include<iostream>
#include<string>

using namespace std;

int main()
{
	int t, flag = 0;

	cin >> t;

	for(int i=0; i<t; i++)
	{
		string s;
		cin >> s;
		flag = 0;
		for(int j=0; j<s.length()-1; j++)
		{
            if(abs(s[j+1] - s[j]) == 1 || abs(s[j+1] - s[j]) == 25)
            {
                continue;
            }
            else
            {
                flag = 1;
                break;
            }
            
		}
        if(flag == 1)   cout << "NO" << endl;
        else    cout << "YES" << endl;
	}
}
