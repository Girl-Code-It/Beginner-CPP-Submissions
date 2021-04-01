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
	int n1, n2, min, hcf, i;
	cin >> n1 >> n2;
	if (n1 > n2)
		min = n2;
	else
		min = n1;
	for (i = 1; i <= min; i++)
		if (n1 % i == 0 && n2 % i == 0)
			hcf = i;
	cout << hcf;
}









int main() {
	r_r_2();
	solve();
	return 0;
}