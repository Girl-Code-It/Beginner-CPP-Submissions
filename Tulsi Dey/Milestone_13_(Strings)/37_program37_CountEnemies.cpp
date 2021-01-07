#include <iostream>

using namespace std;

int main()
{
	int testCases; cin>>testCases;

	while(testCases-->0)
	{
		string s; cin>>s;
        int n = s.length(), res = 0, countO = 0, countX = 0;

        for(int i = 0; i < n; i++)
        {
            if(s[i] == 'X') countX = 1;
            else if(s[i] == 'O') countO++;
            else
            {
                if(countX == 1)
                {
                    countO = 0;
                    countX = 0;
                }
                else
                {
                    res += countO;
                    countO = 0;
                    countX = 0;
                } 
            }
        }
        if(countX == 1) cout<<res<<endl;
        else cout<<(res+countO)<<endl;
	}
	return 0;
}