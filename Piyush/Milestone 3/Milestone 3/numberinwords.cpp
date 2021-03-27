#include<bits/stdc++.h>
#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;

#define ll              long long
#define pb              push_back
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n)       int *arr=new int[n];
#define t(x)            int t; cin>>t; while(t--)
#define fa(n)           for(int i=0; i<n; i++)
#define fr(n)           for(int j=n-1; j>=0; j--)fc
#define f(x,y)          for(int i=x; i<=y; i++)b


void r_r_2() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}




void solve() {
	int n, rev = 0;
	cin >> n;
	while (n > 0)
	{
		int r = n % 10;
		n = n / 10;
		rev = rev * 10 + r;
	}
	while (rev > 0)
	{
		int x = rev % 10;
		rev = rev / 10;
		if (x == 1)
			cout << "One ";
		else if (x == 2)
			cout << "Two ";
		else if (x == 3)
			cout << "Three ";
		else if (x == 4)
			cout << "Four ";
		else if (x == 5)
			cout << "Five ";
		else if (x == 6)
			cout << "Six ";
		else if (x == 7)
			cout << "Seven ";
		else if (x == 8)
			cout << "Eight ";
		else if (x == 9)
			cout << "Nine ";
		else
			cout << "Zero ";

	}
}






int main() {
	r_r_2();
	solve();
	return 0;
}