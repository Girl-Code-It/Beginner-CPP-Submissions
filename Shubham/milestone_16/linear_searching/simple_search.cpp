#include<iostream>

using namespace std;
int linearSearch(int[], int, int);
int main()
{
	int n, arr[1000000], k;
	cin >> n;
	for(int i=0; i<n; i++)
		cin>> arr[i];
	cin >> k;
	
	cout << linearSearch(arr, n, k) << endl;
}
int linearSearch(int arr[], int n, int k)
{
	for(int i=0; i<n; i++)
	{
		if(arr[i] == k)	return i;
	}
	return -1;
}
