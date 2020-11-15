#include <bits/stdc++.h>
using namespace std;

//function to find the missing number in a given array of natural numbers from  1 to n..
int find_missing_number(int *a, int n)
{
	//for XOR of all the elements in the array..
	int x1 = a[0];
	//for XOR of all the natural numbers from 1 to n+1..
	int x2 = 1;
	for (int i = 1; i < n; i++)
		x1 = x1 ^ a[i];

	for (int i = 2; i <= n + 1; i++)
		x2 = x2 ^ i;

	return (x1 ^ x2);
}
int main()
{
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cout << "the missing number is= " << find_missing_number(a, n);
}
