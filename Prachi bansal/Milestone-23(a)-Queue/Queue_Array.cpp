#include<iostream>
using namespace std;
#define size 5
int arr[size];
int front =-1;
int rear=-1;

bool isEmpty(){
	if(front==-1 && rear==-1){
		return true;
	}
	return false;
}
void showFront(){
	if(!isEmpty()){
		cout<<arr[front];	
	}else{
		cout<<"Empty"<<endl;
	}
	return ;
}
void enqueue(int x){
	if(rear==size-1){
		cout<<"Queue is full";
		return ;
	}else if(isEmpty()){
		front++;
		rear++; 
		arr[rear]=x;
	}else{
		rear++;
		arr[rear]=x;
	}
	return ;
} 

void dequeue(){
	if(isEmpty()){
		cout<<"Queue is empty";
		return ;
	}else if(front==rear){
		front=-1;
		rear=-1;
	}else{
		front++;
	}
	return ;
}

void print(){
	for(int i=front;i<=rear;i++){
		cout<<arr[i]<<" ";
	}
	return ;
}
int main(){
	int arr[5];
	enqueue(3);
	enqueue(2);
	enqueue(6);
	enqueue(8);
	enqueue(1);
	cout<<"Queue is:\n";
	print();
	dequeue();
	cout<<"\nNow the queue is:\n";
	print();
	return 0;
}
