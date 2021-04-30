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
	int hexConstant[] = {0, 1, 10, 11, 100, 101, 110, 111, 1000,
	                     1001, 1010, 1011, 1100, 1101, 1110, 1111
	                    };

	long long binary, tempBinary;
	char hex[20];
	int index, i, digit;

	cin >> binary;

	tempBinary = binary;
	index = 0;


	while (tempBinary != 0)
	{
		digit = tempBinary % 10000;
		for (i = 0; i < 16; i++)
		{
			if (hexConstant[i] == digit)
			{
				if (i < 10)
					hex[index] = (char)(i + 48);
				else
					hex[index] = (char)((i - 10) + 65);
				index++;
				break;
			}
		}
		tempBinary /= 10000;
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