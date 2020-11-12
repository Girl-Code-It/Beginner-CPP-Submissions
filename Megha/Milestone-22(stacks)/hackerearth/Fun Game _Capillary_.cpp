#include <bits/stdc++.h>
#include<stack>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* top = NULL;

void push(int data){
    Node* temp = new Node();
    if(!temp){
        return;
    }
    temp->data = data;
    temp->next = top;
    top=temp;
}

void pop(){
    if(top){
    Node* temp = top;
    top=temp->next;
    free(temp);}
}

int Top(){
    
    return top->data;
}

int main() {
    int n,i;
    cin>>n;
    int arr[n+1];

    for(int i=0;i<n;i++){
        cin>>arr[i];
        push(arr[i]);
    }
    i=0;
    while(top && i<n){
        if(arr[i]>Top()){
            cout<<"1 ";
            pop();
        }
        else if(arr[i]<Top()){
            cout<<"2 ";
            i++;
        }
        else if(arr[i]==Top()){
            cout<<"0 ";
            i++;
            pop();
        }
    }

    return 0;
}
