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
	int a;
	cin >> a;
	if (0 <= a && a < 25)
		cout << "F" ;
	else if (25 <= a && a < 45)
		cout << "E" ;
	else if (45 <= a && a < 50)
		cout << "D" ;
	else if (50 <= a && a < 60)
		cout << "C" ;
	else if (60 <= a && a < 80)
		cout << "B" ;
	else if (80 <= a && a <= 100)
		cout << "A" ;
	else
		cout << "invalid marks.";
}







int main() {
	r_r_2();
	solve();
	return 0;
}