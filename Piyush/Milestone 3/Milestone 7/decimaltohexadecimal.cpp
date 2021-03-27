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
	char HEXVALUE[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

	long long decimal, tempDecimal;
	char hex[65];
	int index, rem;

	cin >> decimal;
	tempDecimal = decimal;

	index = 0;


	while (tempDecimal != 0)
	{
		rem = tempDecimal % 16;
		hex[index] = HEXVALUE[rem];
		tempDecimal /= 16;
		index++;
	}
	hex[index] = '\0';

	strrev(hex);

	cout << "Hexadecimal Number: " << hex;
}




int main() {
	r_r_2();
	solve();
	return 0;
}