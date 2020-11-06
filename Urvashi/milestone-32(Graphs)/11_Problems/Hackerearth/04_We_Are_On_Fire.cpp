/* (https://www.hackerearth.com/practice/algorithms/graphs/breadth-first-search/practice-problems/algorithm/we-are-on-fire/activity/)

Simple DFS

Time complexity:- O(N)
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
ll arr[1001][1001], vis[1001][1001], m, n, nations = 0;

int IsValid(ll x, ll y)
{
	return(x >= 0 && x < n && y >= 0 && y < m && arr[x][y] && !vis[x][y]);
}

int NoOfNationsLeft(int x, int y)
{
	if(IsValid(x, y))
	{
		vis[x][y] = 1;
		nations--;
		NoOfNationsLeft(x-1, y);
		NoOfNationsLeft(x+1, y);
		NoOfNationsLeft(x, y-1);
		NoOfNationsLeft(x, y+1);
	}

}
int main()
{
	int q, x, y;
	scanf("%d%d%d", &n, &m, &q);
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			scanf("%d", &arr[i][j]);
			if(arr[i][j])
				nations++;
		}
	}
	for(int i = 0; i < q; i++)
	{
		scanf("%d%d", &x,&y);
		NoOfNationsLeft(x-1, y-1);
		printf("%d\n", nations);
	}
}