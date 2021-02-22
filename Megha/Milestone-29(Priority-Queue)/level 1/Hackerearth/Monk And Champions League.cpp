//https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/monk-and-champions-league/

#include<bits/stdc++.h>
using namespace std;

int main(){
int m,n; //M denotes the number of seating rows in the stadium and N denotes the number of football fans waiting in the line to get a ticket for the match.
cin>>m>>n;
int arr[m+1];
priority_queue<int> q;
int sum = 0;

for(int i=0;i<m;i++){
	cin>>arr[i];
    q.push(arr[i]);
}

while(q.size() >= 2){
	int x = q.top(); q.pop();
	if(n>0){
		sum += x;
	}
	if(x<=0){
		break;}
	x--;
	n--;
	q.push(x);
}

cout<<sum<<endl;

return 0;
}
