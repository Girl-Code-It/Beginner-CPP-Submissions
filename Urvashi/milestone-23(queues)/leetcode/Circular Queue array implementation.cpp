#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define size 5

		int data[size];
		int head =-1;
		int tail = -1;

		
	bool isFull(){
		return ((tail + 1)%size==head);
	}
	

	bool isEmpty(){
		return (head==-1&&tail==-1);
	}
	
	bool EnQueue(int value){
		if(isFull()){
		return false;
		}
		
		if (isEmpty()){
		head = 0;	
		}
		
		tail = (tail + 1)% size;
		data[tail]=value;
		return true;
	}
	
	bool DeQueue(){
		if(isEmpty())
		return false;
		
		if(head==tail){
			head=-1;
			tail=-1;
			return true;
		}
		
		head = (head+1)%size;
		return true;
	}
	
	int Front(){
		if(isEmpty()){
			return -1;
	    }
		return data[head];
	}
	
	int Rear(){
		if(isEmpty())
		    return -1;
		return data[tail]; 
	}
	

	

	
	void Print(){
		if(isEmpty())
		cout<<"Queue is empty\n" ;
		
		else
		{
			int i;
			if(head<=tail)
			{
				for(i=head;i<=tail;i++)
				cout<<data[i]<<" ";
			}
			
			else{
				i=head;
				while(i<size)
				{
					cout<<data[i]<<" ";
					i++;
				}
				i=0;
				while(i<=tail){
					cout<<data[i]<<" ";
					i++;
				}
			}
			cout<<endl;
		}
		
	}


int main(){
	
	EnQueue(5);Print();
	EnQueue(9);Print();
	EnQueue(7);Print();
	DeQueue();Print();
	EnQueue(3);Print();
	
	return 0;
	
}
