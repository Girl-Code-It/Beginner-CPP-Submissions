#include <bits/stdc++.h>

using namespace std;

bool isValid(int n)
{
    if(n == 1) return false;
    if(n < 16) return true;
    
    int sum = 0, copy = n;

    while(n > 0)
    {
        sum += n%16;
        n /= 16;
    }

    if(__gcd(sum,copy) > 1) return true;
    return false;
}
void getRes()
{
    int l, r; cin>>l>>r;
    int count = 0;

    for(int i = l; i <= r; i++)
    {
        if(isValid(i))
        count++;
    }
    cout<<count<<endl;
}

int main()
{
    // ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

	int testCases = 1;
	cin>>testCases;

	while(testCases-->0)
	{
        getRes();
	}
	return 0;
}