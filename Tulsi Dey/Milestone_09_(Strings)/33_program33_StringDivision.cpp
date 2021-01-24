#include <iostream>

using namespace std;

bool getRes(string s)
{
    int n = s.length();
    if(n >= 10) return true;

    for(int i = 1; i < n; i++)
    for(int j = i+1; j < n; j++)
    for(int k = j+1; k < n; k++)
    {
        string a, b, c, d;

        a = s.substr(0,i);
        b = s.substr(i,j-i);
        c = s.substr(j,k-j);
        d = s.substr(k,n-k);

        if (a != b && a != c && a != d && b != c && b != d && c != d) return true;
    }
    return false;
}
int main()
{
	int testCases; cin>>testCases;

	while(testCases-->0)
	{
        string s; cin>>s;

        if(getRes(s)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
	}
	return 0;
}