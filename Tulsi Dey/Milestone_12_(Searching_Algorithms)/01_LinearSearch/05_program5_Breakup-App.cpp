#include <bits/stdc++.h>

using namespace std;
int n1 = 0, n0 = 0;

void getRes()
{
    string s;

    getline(cin,s);

    string s1 = "19", s2 = "20";

    if(s[0] == 'G')
    for(int i = 0; i < s.length()-1; i++)
    {
		string str = "";
		str += s[i]; str += s[i+1];
        if(str == "19" || str == "20")
        {
            n1 += 2;
			i++;
        }
        else if(isdigit(s[i]) && isdigit(s[i+1]))
        {
            n0 += 2;
        }
    }
    else
    for(int i = 0; i < s.length()-1; i++)
    {
		string str = "";
		str += s[i]; str += s[i+1];
        if(str == "19" || str == "20")
        {
            n1++;
			i++;
        }
        else if(isdigit(s[i]) && isdigit(s[i+1]))
        {
            n0++;
        }
    }
}

int main()
{
    // ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

	int testCases = 1;
	cin>>testCases;
    
    cin.ignore(1,'\n');
	while(testCases-->0)
	{
        getRes();
	}

    if(n1 > n0) cout<<"Date"<<endl;
    else cout<<"No Date"<<endl;

	return 0;
}