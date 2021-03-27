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
	char hex[17];
	long long octal, bin, place;
	int i = 0, rem, val;

	gets(hex);

	octal = 0ll;
	bin = 0ll;
	place = 0ll;


	for (i = 0; hex[i] != '\0'; i++)
	{
		bin = bin * place;

		switch (hex[i])
		{
		case '0':
			bin += 0;
			break;
		case '1':
			bin += 1;
			break;
		case '2':
			bin += 10;
			break;
		case '3':
			bin += 11;
			break;
		case '4':
			bin += 100;
			break;
		case '5':
			bin += 101;
			break;
		case '6':
			bin += 110;
			break;
		case '7':
			bin += 111;
			break;
		case '8':
			bin += 1000;
			break;
		case '9':
			bin += 1001;
			break;
		case 'a':
		case 'A':
			bin += 1010;
			break;
		case 'b':
		case 'B':
			bin += 1011;
			break;
		case 'c':
		case 'C':
			bin += 1100;
			break;
		case 'd':
		case 'D':
			bin += 1101;
			break;
		case 'e':
		case 'E':
			bin += 1110;
			break;
		case 'f':
		case 'F':
			bin += 1111;
			break;
		default:
			cout << "Invalid";
		}

		place = 10000;
	}

	place = 1;

	while (bin > 0)
	{
		rem = bin % 1000;

		switch (rem)
		{
		case 0:
			val = 0;
			break;
		case 1:
			val = 1;
			break;
		case 10:
			val = 2;
			break;
		case 11:
			val = 3;
			break;
		case 100:
			val = 4;
			break;
		case 101:
			val = 5;
			break;
		case 110:
			val = 6;
			break;
		case 111:
			val = 7;
			break;
		}

		octal = (val * place) + octal;
		bin /= 1000;

		place *= 10;
	}

	cout << "Octal Number: " << octal;
}





int main() {
	r_r_2();
	solve();
	return 0;
}