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
	int x = 2, y = 5, z = 0;
	cout << "if  x=2, y=5, z=0" << endl;
	cout << "x==2" << endl;
	if (x == 2)
		cout << "true" << endl;
	else
		cout << "false" << endl;

	cout << "x!=5" << endl;
	if (x != 5)
		cout << "true" << endl;
	else
		cout << "false" << endl;


	cout << "x!=5 && y>=5" << endl;
	if (x != 5 && y >= 5)
		cout << "true" << endl;
	else
		cout << "false" << endl;


	cout << "z!=0 || x==2" << endl;
	if (z != 0 || x == 2)
		cout << "true" << endl;
	else
		cout << "false" << endl;

	cout << "x!=5 && y>=5" << endl;
	if (x != 5 && y >= 5)
		cout << "true" << endl;
	else
		cout << "false" << endl;

	cout << "!(y<10)" << endl;
	if (!(y < 10))
		cout << "true" << endl;
	else
		cout << "false" << endl;
}





int main() {
	r_r_2();
	solve();
	return 0;
}