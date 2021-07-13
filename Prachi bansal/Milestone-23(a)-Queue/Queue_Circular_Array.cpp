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
	if(isEmpty()){
		cout<<"Queue is empty";
	}else {
		cout<<arr[front];
	}
}
void enqueue(int x){
	if((rear+1)%size==front){
		cout<<"Queue is full";
	}
	else{
		if(front==-1){
			front=0;
		}
		rear=(rear+1)%size;
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
		front=(front+1)%size;
	}
	return ;
}

void print(){
	if(front<=rear){
		for(int i=front;i<=rear;i++){
			cout<<arr[i]<<" ";
		}	
	}else {
		int i=front;
		while(i<size){
			cout<<arr[i]<<" ";
			i++;
		}
		i=0;
		while(i<=rear){
			cout<<arr[i]<<" ";
			i++;
		}
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
	print(); //3 2 6 8 1
	dequeue();
	cout<<"\nNow the queue is:\n";
	print();  //2 6 8 1
	enqueue(10); //2 6 8 1 10
	cout<<"\n";
	print();
	return 0;
}
