/* Structure of a node in Queue
struct QueueNode
{
    int data;
    QueueNode *next;
    QueueNode(int a)
    {
        data = a;
        next = NULL;
    }
};

And structure of MyQueue
struct MyQueue {
    QueueNode *front;
    QueueNode *rear;
    void push(int);
    int pop();
    MyQueue() {front = rear = NULL;}
}; */

/* The method push to push element into the queue*/
void MyQueue:: push(int x)
{
        // Your Code
        QueueNode *temp =new QueueNode(x);
        if(front == NULL){
            front = rear = temp;
            return;
        }
        rear->next = temp;
        rear = temp;
}

/*The method pop which return the element
  poped out of the queue*/
int MyQueue :: pop()
{
        // Your Code    
        QueueNode *temp = front;
        if(front == NULL){
            return -1;
        }
        if(front == rear){
            front = rear = NULL;
        }
        else{
        front = front->next;}
        return temp->data;
        free(temp);
}
