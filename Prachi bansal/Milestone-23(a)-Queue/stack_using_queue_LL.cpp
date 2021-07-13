//we enter value in second queue first time and as first queue is empty we just swaped both queue data
//then q2 empty q1 have value
//enter value in q2 
//remove element from front of q1 push in q2 until q1 is empty
//then again swap the queues

#include<iostream>
#include<queue>
using namespace std;

int main(){
	queue<int> first;  //queue 1
	queue<int> second; //queue 2
	for(int i=0;i<5;i++){
		int x;
		cin>>x;
		second.push(x);   //push element in queue 2
		while(!first.empty()){       // remove element from queue 1 and insert in queue 2
			second.push(first.front());
			first.pop();
		}
		swap(first,second); 	//swap queue 1 and queue 2
	}
	while(!first.empty()){
		cout<<first.front()<<" ";
		first.pop();
	}
	return 0;
}
