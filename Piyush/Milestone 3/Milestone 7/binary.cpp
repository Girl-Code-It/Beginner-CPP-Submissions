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
	int OCTALVALUES[] = {0, 1, 10, 11, 100, 101, 110, 111};
	long long octal, tempOctal, binary, place;
	int rem;

	cin >> octal;
	tempOctal = octal;

	binary = 0;
	place  = 1;

	while (tempOctal > 0)
	{
		rem = tempOctal % 10;
		binary = (OCTALVALUES[rem] * place) + binary;
		tempOctal /= 10;
		place *= 1000;
	}
	cout << "Binary Number: " << binary;
}




int main() {
	r_r_2();
	solve();
	return 0;
}