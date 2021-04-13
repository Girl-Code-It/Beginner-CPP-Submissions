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
	char hex[17], bin[65] = "";
	int i = 0;

	gets(hex);


	for (i = 0; hex[i] != '\0'; i++)
	{
		switch (hex[i])
		{
		case '0':
			strcat(bin, "0000");
			break;
		case '1':
			strcat(bin, "0001");
			break;
		case '2':
			strcat(bin, "0010");
			break;
		case '3':
			strcat(bin, "0011");
			break;
		case '4':
			strcat(bin, "0100");
			break;
		case '5':
			strcat(bin, "0101");
			break;
		case '6':
			strcat(bin, "0110");
			break;
		case '7':
			strcat(bin, "0111");
			break;
		case '8':
			strcat(bin, "1000");
			break;
		case '9':
			strcat(bin, "1001");
			break;
		case 'a':
		case 'A':
			strcat(bin, "1010");
			break;
		case 'b':
		case 'B':
			strcat(bin, "1011");
			break;
		case 'c':
		case 'C':
			strcat(bin, "1100");
			break;
		case 'd':
		case 'D':
			strcat(bin, "1101");
			break;
		case 'e':
		case 'E':
			strcat(bin, "1110");
			break;
		case 'f':
		case 'F':
			strcat(bin, "1111");
			break;
		default:
			printf("Invalid hexadecimal input.");
		}
	}
	cout << "Binary Number: " << bin;
}



int main() {
	r_r_2();
	solve();
	return 0;
}