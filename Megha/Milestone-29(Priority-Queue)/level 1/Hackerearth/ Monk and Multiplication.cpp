//https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/monk-and-multiplication/submissions/


#include<iostream>
#include<queue>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	priority_queue<int>q;
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
		q.push(arr[i]);
		if(i<2){
			cout<<"-1"<<endl;
		}
		else{
			int x = q.top(); 
			q.pop();
			int y = q.top(); 
			q.pop();
			int z = q.top();
			cout<< 1LL*x*y*z <<endl;
			q.push(x);
			q.push(y);
		}
	}

	return 0;
}
