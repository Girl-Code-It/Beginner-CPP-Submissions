/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <bits/stdc++.h>
using namespace std;

void odd(int *arr , int n)
{
	unordered_map<int,int>m;
	for(int i = 0 ; i < n ; i++){
		m[arr[i]]++ ;
	}
	for(auto i : m){
		if(i.second % 2)
		cout<<i.first;
	}
}

int main()
{
	int n ;
	cin>>n;
	int arr[n];
	for(int i = 0 ; i < n ; i++){
		cin>>arr[i];
	}
	odd(arr , n) ;
}

