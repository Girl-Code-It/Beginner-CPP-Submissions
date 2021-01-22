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


void old(int a, int b, int c) {
	if (a > b && a > c)
		cout << "a is oldest" << endl;
	else if (b > c)
		cout << "b is oldest" << endl;
	else
		cout << "c is oldest" << endl;
}



void young(int a, int b, int c) {
	if (a < b && a < c)
		cout << "a is youngest";
	else if (b < c)
		cout << "b is youngest";
	else
		cout << "c is youngest";
}




void solve() {
	int a, b, c;
	cin >> a >> b >> c;
	old(a, b, c);
	young(a, b, c);
}





int main() {
	r_r_2();
	solve();
	return 0;
}