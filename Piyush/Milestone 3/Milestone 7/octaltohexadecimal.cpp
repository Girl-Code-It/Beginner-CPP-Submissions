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
	char hex[65] = "";
	int rem;

	place = 1;
	binary = 0;

	cin >> octal;
	tempOctal = octal;


	while (tempOctal > 0)
	{
		rem = tempOctal % 10;
		binary = (OCTALVALUES[rem] * place) + binary;
		tempOctal /= 10;

		place *= 1000;
	}

	while (binary > 0)
	{
		rem = binary % 10000;
		switch (rem)
		{
		case 0:
			strcat(hex, "0");
			break;
		case 1:
			strcat(hex, "1");
			break;
		case 10:
			strcat(hex, "2");
			break;
		case 11:
			strcat(hex, "3");
			break;
		case 100:
			strcat(hex, "4");
			break;
		case 101:
			strcat(hex, "5");
			break;
		case 110:
			strcat(hex, "6");
			break;
		case 111:
			strcat(hex, "7");
			break;
		case 1000:
			strcat(hex, "8");
			break;
		case 1001:
			strcat(hex, "9");
			break;
		case 1010:
			strcat(hex, "A");
			break;
		case 1011:
			strcat(hex, "B");
			break;
		case 1100:
			strcat(hex, "C");
			break;
		case 1101:
			strcat(hex, "D");
			break;
		case 1110:
			strcat(hex, "E");
			break;
		case 1111:
			strcat(hex, "F");
			break;
		}

		binary /= 10000;
	}

	strrev(hex);

	cout << "Hexadecimal Number: " << hex;
}




int main() {
	r_r_2();
	solve();
	return 0;
}