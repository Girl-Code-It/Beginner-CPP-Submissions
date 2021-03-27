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
	int n, l, s = 0;
	cin >> n;
	l = n;
	while (n != 0)
	{
		n = n / 10;
		s++;
	}
	cout << "First Number: " << int (l / pow(10, s - 1)) << endl;
	cout << "Last Number: " << l % 10 << endl;
	cout << "Sum: " << l % 10 + int(l / pow(10, s - 1));

}





int main() {
	r_r_2();
	solve();
	return 0;
}