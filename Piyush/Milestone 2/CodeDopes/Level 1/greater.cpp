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
	int x, y;
	cout << "Enter the quantity of product: ";
	cin >> x;
	cout << "\nEach product costs Rs 100";
	y = x * 100;
	cout << "\nTotal cost of purchase is: " << y;
	if (y > 1000) {
		cout << "\nYou will get a 10% discount";
		cout << "\nYour payable amount is: " << 0.9 * y;
	} else
		cout << "\nYou need to purchase more than Rs 1000 to avail discount";

}







int main() {
	r_r_2();
	solve();
	return 0;
}